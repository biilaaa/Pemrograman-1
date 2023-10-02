import math
print("Diketahui : ")

a = int(input("Alas = "))

t = int(input("Tinggi = "))

sisiA = t
sisiB = int(math.sqrt(a**2 + t**2))
sisiC = a

KelilingSegitiga = sisiA + sisiB + sisiC
LuasSegitiga = 0.5 * a * t

print(f"Jawab : ")

print(f"Sisi A =  {sisiA} cm")
print(f"Sisi B =  {sisiB} cm")
print(f"Sisi C =  {sisiC} cm")

print(f"Keliling =  {KelilingSegitiga} cm")
print(f"Luas =  {LuasSegitiga} cm")