def getLinha(matriz, n):
    return [i for i in matriz[n]]  # ou simplesmente return matriz[n]

def getColuna(matriz, n):
    return [i[n] for i in matriz]

print("Matriz A")
lin_a = int(input("Insira o número de linhas da matriz A: "))
col_a = int(input("Insira o número de colunas da matriz A: "))

Matriz_A = [[0 for i in range(col_a)] for j in range(lin_a)]

#print(Matriz_A)
print()

print("Matriz B")
lin_b = int(input("Insira o número de linhas da matriz B: "))
col_b = int(input("Insira o número de colunas da matriz B: "))

Matriz_B = [[0 for i in range(col_b)] for j in range(lin_b)]

#print(Matriz_B)



if col_a != lin_b:
    print("Não é possível!")
    print("O número de COLUNAS da Matriz A, tem que ser igual ao número de LINHAS da Matriz B")
else:
    print()
    print("Insira os valores na Matriz A: ")
    print()
    for i in range(len(Matriz_A)):
        for j in range(len(Matriz_A[0])):
            Matriz_A[i][j] = int(input(f"Insira o valor na matriz {i+1} X {j+1}: "))

    #print(Matriz_A)

    print()
    print("Insira os valores da Matriz B: ")
    print()
    for i in range(len(Matriz_B)):
        for j in range(len(Matriz_B[0])):
            Matriz_B[i][j] = int(input(f"Insira o valor na matriz {i+1} X {j+1}: "))

    #print(Matriz_B)

    Matriz_C = []
    
    for i in range(0, lin_a):
        Matriz_C.append([])
        for j in range(0, col_b):
            try:
                MultList =  [x*y for x, y in zip(getLinha(Matriz_A, i), getColuna(Matriz_B, j))]
                Matriz_C[i].append(sum(MultList))
            except IndexError:
                err = "X"
    
    print()
    
    print("Matriz A: ")
    for i in range(0, lin_a):
        for j in range(0, col_a):
            try:
                print(f"[{Matriz_A[i][j]:^5}]", end="")
            except IndexError:
                err = "X" 
        print()
    
    print()
    
    print("Matriz B: ")
    for i in range(0, lin_b):
        for j in range(0, col_b):
            try:
                print(f"[{Matriz_B[i][j]:^5}]", end="")
            except IndexError: 
                err = "X" 
        print()
        
    print()
    
    print("Matriz C: A x B")
    for i in range(0, lin_a):
        for j in range(0, col_b):
            try:
                print(f"[{Matriz_C[i][j]:^5}]", end="")
            except IndexError:
                err = "X"  
        print()