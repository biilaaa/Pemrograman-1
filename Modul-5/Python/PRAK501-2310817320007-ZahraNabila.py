def MaxBilangan(a, b, c, d):
    MaxBil = a

    if MaxBil < b:
        MaxBil = b

    if MaxBil < c:
        MaxBil = c

    if MaxBil < d:
        MaxBil = d
        
    return MaxBil

a, b, c, d = map(int, input().split())
hasil = MaxBilangan(a, b, c, d)
print(hasil)
