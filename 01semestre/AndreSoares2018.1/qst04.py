cod = int(input("Digite o cod. do cargo: "))
sal = float(input("Digite o salário atual: "))

lista = { 
  101: { 'cargo': 'Gerente', 'perc': 0.10}, 
  102: { 'cargo': 'Engenheiro', 'perc': 0.20},
  103: { 'cargo': 'Técnico', 'perc': 0.30}
}

if(cod in lista):
  difer = sal * lista[cod]['perc']
  ajuste = sal + difer
else:
  difer = sal * 0.40
  ajuste = sal + difer;


print("Salário anterior: {0:.2f}" .format(sal))
print("Aumento: {0:.2f}" .format(difer))
print("Novo salário: {0:.2f}" .format(ajuste))
