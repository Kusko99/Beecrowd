produtos = {1:4,2:4.5,3:5,4:2,5:1.5}
item,quantidade = input().split()
item = int(item)
quantidade = int(quantidade)
preco = produtos[item]
total = quantidade*preco
print(f"Total: R$ {total:.2f}")
