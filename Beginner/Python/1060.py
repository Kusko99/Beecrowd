positivo = 0
for num in range (6):
    a=float(input())
    if a < 0:
        positivo += 1
print(f'{positivo:.0f} valores positivos')   
