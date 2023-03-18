for i in range(1,10):
    String = "I=" + str(i)
    if i%2 != 0:
        for j in range(6,3,-1):
            String += " J=" + str(j+i)
            print(String)
            String = String[:3]
