from time import sleep
vogais = []
consoante = []
nomes = []
nuVo = 0
nuCo = 0
letras = 0
nuNo = 0
while True:
    nome = str(input('Digite seu nome completo: ').strip()).upper()
    nomes.append(nome)
    nuNo += 1
    for l in nome:
        if l in 'AÃÁÂEÊÉIÍOÕÔÓUÚ':
            vogais.append(l)
            nuVo += 1
        else:    
            if l != ' ' and 'ÁÃÂÊÉÍÕÔÓÚ':
                consoante.append(l)
                nuCo += 1
        if l != ' ':    
                letras += 1
    print(f'Seu nome é {nome} e tem {letras} letras', end=' ')
    print(f'\nTem {nuVo} vogais e as vogais são {vogais}', end=' ')
    print(f'\nTem {nuCo} consoantes e as consoantes são {consoante}')

    resp = str(input('Deseja continuar? S/N ')).upper()
    
    if resp in 'S':
        vogais = []
        consoante = []
        nuVo = 0
        nuCo = 0
        letras = 0
    elif resp in 'N':
        break
    else:
        print('Digite apenas "S" ou "N"!!!')
        resp = str(input('Deseja continuar? S/N ')).upper()
        if resp != 'S' and 'N':
            print('Digite apenas "S" ou "N"!!!')
            print('Encerrando...')
            sleep(1.2)
            break
        if resp in 'S':
            vogais = []
            consoante = []
            nuVo = 0
            nuCo = 0
            letras = 0
            
print(f'Você digitou {nuNo} nomes: ')
print(f'Os nomes digitados foram {sorted(nomes)} ')

