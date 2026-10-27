def maximal(a, b):
    if a > b:
        return a
    else:
        return b

def minimum(a, b):
    if a < b:
        return a
    else:
        return b

limit = 0
max = -100000
min = 100000

numeral = int(input())
values = list(map(int, input().split()))

while limit < numeral:
    value = values[limit]
    max = maximal(max, value)
    min = minimum(min, value)

    limit += 1

print(max, min)
