bil1, bil2 = map(int, input("Masukkan Angka Pertama dan Angka Kedua : ").split())

Batas = bil1 - bil2
if Batas < 0:
    Batas = Batas * -1
    print("Urutan Angka Terbesar ke Terkecil      : ", end="")
    for i in range(Batas + 1):
        print(f"{bil1} {bil2}", end="")

        bil1 = bil1 + 1
        bil2 = bil2 - 1
        if i < Batas:
            print(" - ", end="")
else:
    Batas = Batas * 1
    print("Urutan Angka Terkecil ke Terbesar      : ", end="")
    for i in range(Batas + 1):
        print(f"{bil1} {bil2}", end=" ")

        bil1 = bil1 - 1
        bil2 = bil2 + 1
        if i < Batas:
            print(" - ", end="")
