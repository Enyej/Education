for i in range(1, 32000):
    l = len(str(i))
    sum = 0
    for n in str(i):
        sum += int(n) ** l
    if sum==i:
        print(i)