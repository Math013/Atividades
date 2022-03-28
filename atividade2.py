nome = str(input("Digite seu nome: "))
salario = float(input("Digite seu salário: "))
if salario == 0: print("Desempregado") 
else: 
    n_dep = int(input("Número de dependentes: "))

if salario >= 3000:
    IR = (salario - (salario * 0.1) - n_dep * 190) * 0.25 - 350
    print(f"{nome} seu salário teve R${IR:.2f} de desconto")
    print(f"Seu salário é R${salario - IR:.2f}")
else:
    print(f"{nome} você é isento de IR")
    
