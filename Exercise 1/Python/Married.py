def getDevisorsSum(num):
    sum = 0
    for i in range(1, num // 2 + 1):
        if num % i == 0:
            sum += i
    return int(sum)


lst = list()
for i in range(1, 10000):
    t = (i, getDevisorsSum(i))
    lst.append(t)
for p in range(0, len(lst)):
    for p1 in range(0, len(lst)):
        if lst[p][0] + 1 == lst[p1][1] and lst[p][1] - 1 == lst[p1][0]:
            print(str(lst[p][0]) + " " + str(lst[p1][0]))
