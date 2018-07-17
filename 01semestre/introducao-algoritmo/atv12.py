aux = 0;
arr = [];
while aux < 3:
  num = input("Digite um número: ")
  arr.append(num);
  aux += 1
arr.reverse()

for a in arr:
  print(a)
  