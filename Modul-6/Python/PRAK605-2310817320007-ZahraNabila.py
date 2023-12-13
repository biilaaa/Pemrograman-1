n = int(input())
Matriks1 = []; Matriks2 = []; MatriksAXB = []

print('Matriks A')
for x in range(n):
    z =  list(map(int, input().split()))
    Matriks1.append(z)

print('Matriks B')
for x in range(n):
    z =  list(map(int, input().split()))
    Matriks2.append(z)

print('Matriks AXB')
for x in range(n):
    MatriksAXB.append([])
    for y in range(n):
        Jumlah = 0
        for z in range(n):
            Jumlah = Jumlah + Matriks1[x][z] * Matriks2[z][y]
        MatriksAXB[x].append(Jumlah)

for isi in MatriksAXB:
    for z in isi :
        print(z, end=" ")
    print()
