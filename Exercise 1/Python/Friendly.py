def getDevisorsSum(num):
    sum = 0
    for i in range(1, num // 2 + 1):
        if num % i == 0:
            sum += i
    return int(sum)


lst = list()
for i in range(1, 10000):
    t = (i,getDevisorsSum(i))
    lst.append(t)
for p in lst:
    for p1 in lst:
        if p[0] == p1[1] and p[1] == p1[0]:
            print(p)
