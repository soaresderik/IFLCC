num = int(input("Digite um número: "))

if num > 0:
  pos_or_neg = "e é positivo."
elif num < 0:
  pos_or_neg = "e é nagativo."
else:
  pos_or_neg = "e o número é zero"

if num % 2 == 0:
  print(num, "É um número par", pos_or_neg)
else: 
  print(num, "É um número impar", pos_or_neg)


