def aspas(entrada):
    return entrada[1:-1]

userID = input("Digite o id do usuário:\n")

arquivoUsers = open("BX-Book-Ratings.csv", encoding="iso-8859-1")
linhasUsers = arquivoUsers.readlines()

usersDados = list()
isbns = list()
dictMedias = dict()

# Percorrendo e organizando a lista do arquivo de usuários
for linha in linhasUsers:
    usersDados.append(linha.split(";"))
    usersDados[-1][0] = usersDados[-1][0].replace('"', "")
    usersDados[-1][1] = usersDados[-1][1].replace('"', "")
    usersDados[-1][2] = usersDados[-1][2].replace('"', "").replace("\n", "")

#Verificando id do usuário com o id recebido
    if usersDados[-1][0] == userID:
        isbns.append(usersDados[-1][1])

#Obtendo média dos livros 
for isbn in isbns:
    if isbn not in dictMedias:
        dictMedias[isbn] = list()

    for dado in usersDados:
        if isbn == dado[1] and dado[2].isnumeric():
            dictMedias[isbn].append(float(dado[2]))

arquivoUsers.close()

#Abrindo arquivo livros
arquivoBooks = open("BX_Books.csv", encoding="iso-8859-1")
linhasBooks = arquivoBooks.readlines()

booksDados = list()
livrosAvaliados = list()

for linha in linhasBooks:
    booksDados.append(linha.split(";"))
    booksDados[-1][0] = booksDados[-1][0].replace('"', "")
    booksDados[-1][1] = booksDados[-1][1].replace('"', "")
    booksDados[-1][2] = booksDados[-1][2].replace('"', "")
    booksDados[-1][3] = booksDados[-1][3].replace('"', "")
    booksDados[-1][4] = booksDados[-1][4].replace('"', "")
    booksDados[-1][5] = booksDados[-1][5].replace('"', "")
    booksDados[-1][6] = booksDados[-1][6].replace('"', "")
    booksDados[-1][7] = booksDados[-1][7].replace('"', "").replace("\n", "")

    if booksDados[-1][0] in isbns:
        livrosAvaliados.append(booksDados[-1][0:5])

#Apresentando livros avaliados pelo usuário 
print(f"\nLivros avaliados pelo user com id: {userID}")

if len(livrosAvaliados) > 0:
    cont = 1
    for livro in livrosAvaliados:
        print(f"\n{cont}° Livro:")
        print(f"Título: {livro[1]}")
        print(f"ISBN: {livro[0]}")
        print(f"Data de publicação: {livro[2]}")
        print(f"Editora: {livro[3]}")
        print(f"Média de avalições do livro: {sum(dictMedias[livro[0]])/len(dictMedias[livro[0]]) :.2f}")
        cont += 1

else:
    print("\nO usuário não avaliou nenhum livro presente na tabela.")

arquivoBooks.close()