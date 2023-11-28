def reverse(a):
    rev = 0

    while a != 0:
        rev = rev * 10
        rev = rev + a % 10
        a = a // 10

    return rev

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B

print(reverse(C))
