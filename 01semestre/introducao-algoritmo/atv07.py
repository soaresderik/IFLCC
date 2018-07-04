segundos = int(input("Digite o valor em segundo: "))

h = segundos // 3600
r = (segundos % 3600)
m = r // 60
s = r % 60

print(" {}h {}m {}s" .format(h, m, s))