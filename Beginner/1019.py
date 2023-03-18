x = int(input())
if x > 3600:
    horas = x//3600
    x = x%3600
else:
    horas = 0
if x > 60:
    minutos = x//60
    x = x%60
else:
    minutos = 0
segundos = x
print(f"{horas}:{minutos}:{segundos}")
