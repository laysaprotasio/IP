def aspas(entrada):
    return entrada[1:-1]

def media(entrada):
    return entrada['total'] / entrada['contador']

# Receber o nome do autor a ser buscado
autor = input('Digite o nome do autor para realizar a consulta: ')

# Encontrar os livros do autor
livros_do_autor = []

with open('BX-Books.csv', encoding="iso-8859-1") as arq_livros:
    next(arq_livros)  # pula o cabeçalho
    for linha in arq_livros:
        entrada = [aspas(x) for x in linha.split(";")]
        if entrada[2] == autor:
            livros_do_autor.append({'ISBN': entrada[0], 'Nome': entrada[1]})

if not livros_do_autor:
    print('Autor não encontrado!')
else:
    print(f'Autor encontrado: {autor}')

    # Encontrar todas as avaliações para os livros do autor
    avaliacoes = []

    with open('BX-Book-Ratings.csv', encoding='iso-8859-1') as arq_notas:
        next(arq_notas)  # pula o cabeçalho
        for linha in arq_notas:
            entrada = [aspas(x) for x in linha.split(";")]
            for livro in livros_do_autor:
                if entrada[1] == livro['ISBN']:
                    avaliacoes.append({'usuario': entrada[0], 'nota': int(entrada[2][0])})

    if not avaliacoes:
        print(f'Nenhuma avaliação encontrada para os livros do autor {autor}!')
    else:
        print(f'Número de avaliações: {len(avaliacoes)}')

        # Encontrar a média das avaliações para cada usuário
        avaliacoes_por_usuario = {}

        with open('BX-Users.csv', encoding='iso-8859-1') as arq_usuarios:
            next(arq_usuarios)  # pula o cabeçalho
            for linha in arq_usuarios:
                entrada = [aspas(x) for x in linha.split(';')]
                try:
                    usuario = entrada[0]
                    idade = int(entrada[2])
                except:
                    continue

                # Se o usuário tiver feito uma avaliação para um dos livros do autor, incluir na média do usuário
                for avaliacao in avaliacoes:
                    if avaliacao['usuario'] == usuario:
                        if usuario not in avaliacoes_por_usuario:
                            avaliacoes_por_usuario[usuario] = {'total': 0, 'contador': 0, 'idade': idade}
                        avaliacoes_por_usuario[usuario]['total'] += avaliacao['nota']
                        avaliacoes_por_usuario[usuario]['contador'] += 1

        if not avaliacoes_por_usuario:
            print(f'Nenhuma avaliação encontrada para os livros do autor {autor}!')
        else:
            #Encontrar o usuário com a maior média
            melhor_media = 0
            melhor_usuario = ''
            for usuario, dados in avaliacoes_por_usuario.items():
                if dados['contador'] > 2:
                    media_usuario = media(dados)
                    if media_usuario > melhor_media:
                        melhor_media = media_usuario
                        melhor_usuario = usuario

            if not melhor_usuario:
                print(f'Nenhuma avaliação encontrada para os livros do autor {autor}!')
            else:
                print(f'O usuário que melhor avaliou o autor {autor} foi {melhor_usuario} - idade: {[idade]} anos')