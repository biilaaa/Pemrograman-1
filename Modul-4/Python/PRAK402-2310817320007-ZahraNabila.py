BatasBil = int(input("Masukkan Maksimal Batas Bilangan  : "))

print("Urutan Bilangan Ganjil            : ", end="")
for i in range(1, BatasBil + 1,):
    if i % 2 != 0:
        print(i, end=" ")

print("\nUrutan Bilangan Genap Terbalik    : ", end="")
for i in range(BatasBil, 1, -1):
    if i % 2 ==0:
        print(i, end=" ")