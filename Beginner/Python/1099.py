teste = int(input())
for _ in range(teste):
    lista = []
    a,b = (input()).split()
    a,b = int(a),int(b)
    if b > a:
        for i in range(a+1,b):
            if i%2 != 0:
                lista.append(i)
    if a > b:
        for i in range(b+1,a):
            if i%2 != 0:
                lista.append(i)
    print(sum(lista))
