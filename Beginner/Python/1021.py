valor = float(input())
valor = int(valor*100)
notas = [10000,5000,2000,1000,500,200]
print('NOTAS:')
for nota in notas :
    quant_n = valor // nota
    valor = valor % nota 
    print(f'{quant_n} nota(s) de R$ {nota/100:.2f}')
moedas = [100,50,25,10,5,1]
print('MOEDAS:')
for moeda in moedas :
    quant_m = valor // moeda
    valor = valor % moeda
    print(f'{quant_m} moeda(s) de R$ {moeda/100:.2f}')
