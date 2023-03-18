CasosTestes = int(input())
for _ in range(CasosTestes):
    String = ""
    StringA,StringB = input().split()
    if len(StringA) >= len(StringB):
        for i in range(len(StringB)):
            String += StringA[i] + StringB[i]
        String += StringA[i+1:]
    if len(StringA) < len(StringB):
        for i in range(len(StringA)):
            String += StringA[i] + StringB[i]
        String += StringB[i+1:]
    print(String)
