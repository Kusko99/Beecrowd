continue_a_nadar = True
while continue_a_nadar:
    x,y = map(int,input().split())
    if x > 0:
        if y < 0:
            print("quarto")
        elif y > 0:
            print("primeiro")
    elif x < 0:
        if y < 0:
            print("terceiro")
        elif y > 0:
            print("segundo")
    elif x == 0 or y == 0:
        continue_a_nadar = False
