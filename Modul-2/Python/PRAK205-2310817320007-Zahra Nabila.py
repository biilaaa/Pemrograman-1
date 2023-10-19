import math
sisiA = input() . split()

if len(sisiA)== 1:
    sisiA = int(sisiA[0])
    sisiB = int(input())

elif len(sisiA)== 2:
    sisiA, sisiB = map(int, sisiA)

Alas = int(math.sqrt(sisiB**2 - sisiA**2))
Tinggi = sisiA
Keliling = sisiA + sisiB + Alas
Luas = 0.5 * Alas * sisiA

print(f"Alas          = {Alas} cm ")
print(f"Tinggi        = {Tinggi} cm ")
print(f"Keliling      = {Keliling} cm ")
print(f"Luas          = {Luas:.0f} cm^2 ")