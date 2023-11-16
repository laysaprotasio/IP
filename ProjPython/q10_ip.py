# TODO: criar testes automatizados

def aspas(entrada):
    return entrada[1:-1]

def aspasfinais(entrada):
    return entrada[:-1]

def media(numerador, denominador):
    if denominador == 0:
        return None
    return numerador / denominador


nome = input("Digite o autor do livro que deseja consultar:\n")

# Encontrando o autor do livro a partir do que o usuário deu:
autor = 0
livros = {}

arq_livros = open("BX_Books.csv", encoding="iso-8859-1")

for linha in arq_livros:
    entrada = [aspas(x) for x in linha.split(";")]
    if entrada[2] == nome:
        autor = nome
        livros[entrada[0]] = [entrada[0], entrada[1], 0, 0] # ISBN, nome, soma das notas, quantidade de notas

arq_livros.close()

if autor == 0:
    print("Autor não encontrado")

else:
    # Encontrando a pior avaliação de cada livro do respectivo autor:
    arq_avaliacoes = open("BX-Book-Ratings.csv", encoding="iso-8859-1")

    for linha in arq_avaliacoes:
        entrada = [aspas(x) for x in linha[:-1].split(";")]
        isbn = entrada[1]
        nota = entrada[2]
        if isbn in livros:
            livros[isbn][2] = livros[isbn][2] + int(nota)
            livros[isbn][3] = livros[isbn][3] + 1

    arq_avaliacoes.close()
    # [isbn, media]
    medias = [[x[0], media(x[2], x[3])] for x in livros.values()] # Calculando a média das notas
    menorMedia = 0
    for item in medias:
        if (menorMedia == 0 or item[1] < menorMedia):
            menorMedia = item[1]

    if menorMedia == 0:
        print("O autor não possui livros com avaliações.")
    else:
        print("A menor média é ", menorMedia)
        print("Livro(s): ")
        for item in medias:
            if (item[1] == menorMedia):
                print(livros.get(item[0])[1])