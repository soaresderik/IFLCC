print('------------------')
print('Calculadora em Lua')
print('------------------')

local novamente = 's', num1, num2;

while novamente == 's' do
  os.execute('clear')
  io.write('Digite o primeiro nº: ')
  num1 = io.read()
  io.write('Digite o segundo nº: ')
  num2 = io.read()

  print('\n------------------')
  print('(1) Adição')
  print('(2) Subtração')
  print('(3) Multiplicação')
  print('(4) Divisão')
  print('------------------')

  io.write('Escolha a operacao: ')
  local operacao = io.read()

  local operadores = {
    ["1"] = function(x, y) return x + y end,
    ["2"] = function(x, y) return x - y end,
    ["3"] = function(x, y) return x * y end,
    ["4"] = function(x, y) return x / y end
  }

  local function default()
    print('Operação Inválida')
  end

  local result = operadores[operacao] or default

  print("O resultado é: ", result(num1, num2))
  io.write('Deseja continuar? (s) Sim (n) Nao: ')
  novamente = io.read()
end