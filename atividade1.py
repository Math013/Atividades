aluno = str(input("Digite o nome do aluno: "))

n1 = float(input("Digite a 1ª nota: "))
n2 = float(input("Digite a 2ª nota: "))
n3 = float(input("Digite a 3ª nota: "))

media = (n1+n2+n3) / 3

if media >= 6:
    print("Aprovado!")
elif 3 <= media < 6:
    print("Exame")
else:
    print("Reprovado!")

print(f"As notas do aluno(a) {aluno} é de {n1}, {n2} e {n3} e sua média é: {media:.1f}")