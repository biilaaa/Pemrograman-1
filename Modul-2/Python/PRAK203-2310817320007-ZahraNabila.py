Nilai   = input().split()

if len(Nilai)== 2:
    a,b = map(float, Nilai)
    i,j = map(float, input().split())
    x,y = map(float, input().split())

elif len(Nilai)== 6:
    a, b, i, j, x, y = map(float, Nilai)

hasil = (a - b) * i / j   - (x + y)

print(f"{hasil:.3f}")