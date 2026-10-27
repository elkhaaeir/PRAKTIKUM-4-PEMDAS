def count(first, second):
    result = first - second

    if result < 0:
        result = -result

    return result

def absolute(number):
        if number < 0:
            number = -number

        return number

a, b, c, d = map(int, input().split())

result = count(a,c) + count(b,d)

print(absolute(result))