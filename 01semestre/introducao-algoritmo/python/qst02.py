idade = int(input("Digite a sua idade: "))
mes = int(input("Digite o mês de nascimento: "))
dia = int(input("Digite o dia de nascimento: "))


idade_dias= idade * 365
idade_dias = idade_dias + (mes * 30)
idade_dias = idade_dias + dia

print("Você tem: ", idade_dias, " dias de idade")