while True:
    a,b = input().split()
    a,b = int(a),int(b)
    if a > b:
        print("Decrescente")
    elif b > a:
        print("Crescente")
    else:
        break
