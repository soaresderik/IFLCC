ano = int(input("Digite o ano do veículo: "))
valor = float(input("Digite o valor do veículo: "))

if ano >= 2018:
  desconto = 0.15
elif ano < 2018 and ano > 2010:
  desconto = 0.10
else:
  desconto = 0.05

total = valor - (valor * desconto) 

print("O valor com desconto é de: R$ {0:.2f}" .format(total))