a,b,c,d = input().split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
valido = 0
if b > c:
    valido += 1
if d > a:
    valido += 1
if c+d > a+b:
    valido += 1
if c>=0 and d>=0:
    valido += 1
if a%2 == 0:
    valido += 1
if valido >= 5:
    print('Valores aceitos')
else:
    print('Valores nao aceitos')
