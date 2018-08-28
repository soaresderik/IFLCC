aux = 0;
arr = [];
while aux < 3:
  num = int(input("Digite um número: "))
  arr.append(num);
  aux += 1

arr.sort(reverse=True)

for a in arr:
  print(a)