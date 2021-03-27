# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


def findWinner(result):
    max_res = 0
    line = 0
    i = 0
    for line in result:
        res = sum(line)
        if max_res < res:
            max_res = res
            line = i
        i += 1
    return line, max_res


size = int(input())
score = int(input())
array_input = []
for y in range(size):
    array_input.append([int(y) for y in input().split()[:score]])
print(findWinner(array_input))
