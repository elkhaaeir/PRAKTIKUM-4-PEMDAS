def reverse(number):
    result = 0

    while number > 0:
        digit = number % 10
        result = result * 10 + digit
        number = number // 10

    return result

A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)

C = A + B

print(reverse(C))