eleitores = int(input("Digite a quantidade de eleitores: "))

nulos = int(input("Digite a quantidade de votos nulos: "))
brancos = int(input("Digite a quantidade de votos brancos: "))
validos = int(input("Digite a quantidade de votos validos: "))

p_nulos = 100 * (nulos / eleitores)
p_brancos = 100 * (brancos / eleitores)
p_validos = 100 * (validos / eleitores)

print("Votos nulos: {0:.2f}%" .format(p_nulos))
print("Votos nulos: {0:.2f}%" .format(p_brancos))
print("Votos nulos: {0:.2f}%" .format(p_validos))