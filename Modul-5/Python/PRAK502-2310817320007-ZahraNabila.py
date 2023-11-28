def hitung (nilai1, nilai2):
    Hasil = nilai1 - nilai2
    return (mutlak(Hasil))

def mutlak(angka):
    return abs(angka)

a, c, b, d = map(int, input().split())

Hasil = hitung(a, b) + hitung(c, d)
print(mutlak(Hasil))