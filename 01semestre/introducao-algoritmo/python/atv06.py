salario = float(input("Digite o seu salário Ex(1000.00): "))
reajuste = int(input("Digite o valor do rejuste em % Ex(2): "))

novo_salario = salario + (salario * (reajuste / 100))

print("O valor do novo salário é: ", novo_salario)
