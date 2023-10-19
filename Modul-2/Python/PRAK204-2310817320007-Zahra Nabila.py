phi = 3.142857
Nilai = input() . split()

if len (Nilai)== 1:
    r = float(Nilai[0])
    t = float(input())

elif len(Nilai)== 2:
    r, t = map(float, Nilai)

Volume = phi * r * r * t
Luas = 2 * phi * r * ( r + t)
Keliling = 2 * phi * r

print(f"Volume      = {Volume:.2f}")
print(f"Luas        = {Luas:.2f}")
print(f"Keliling    = {Keliling:.2f}")
