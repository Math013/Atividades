# -*- coding: utf-8 -*-
"""Lista.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1MIaZV6ykNIFMm5D332rKiaCKXIrXQeJP

Média
"""

n1 = int(input("Digite o 1º número: "))
n2 = int(input("Digite o 2º número: "))

media = (n1 + n2)/2

print(f"A média dos valores {n1} e {n2} é {media:.1f}")

"""IMC"""

peso = float(input("Informe seu peso: "))
alt = float(input("Informe sua altura (em metros): "))

IMC = peso/(alt*alt)

if IMC < 18.5:
  print("Abaixo do peso normal")
elif 18.5 < IMC < 24.9:
  print("Peso normal")
elif 25 < IMC < 29.9:
  print("Sobrepeso")
elif 30 < IMC < 34.9:
  print("Obesidade de Grau 1")
elif 35 < IMC < 39.9:
  print("Obesidade de Grau 2")
else:
  print("Obesidade de Grau 3")

print(f"Seu IMC é de {IMC:.2f}")

"""Volume"""

altura = float(input("Informe a altura da lata de óleo (em metros): "))
ra = float(input("Informe o raio da lata de óleo (em metros): "))

vol = 3.14159 * ra**2 * altura
print(f"O volume da lata de óleo é de {vol:.2f}³")

"""Ler maior

"""

valores = []
for x in range(0,5):
  num = float(input(f"Informe o {x+1}º valor: "))
  valores.append(num)

print(max(valores))

"""Consumo médio

"""

litporkm = int(input("Informe os litros por km: "))
tempo = int(input("Informe o tempo gasto (em horas): "))
veloc = int(input("Informe a velocidade média (em KM/H): "))

distancia = tempo * veloc

litusado = distancia / litporkm

print()

print(f"A velocidade média percorrida é de {veloc}KM/H")
print(f"O tempo gasto na viagem é de {tempo} horas")
print(f"A distância percorrida é de {distancia} KM")
print(f"Foi utilizado {litusado} Litros na viagem")