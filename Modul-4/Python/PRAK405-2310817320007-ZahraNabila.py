n = int(input("Masukkan Jumlah Baris  = "))
kelipatan = int(input("Masukkan Kelipatan     = "))
hasil = 0

for i in range(1, n + 1):
    TotalN = 0

    for x in range(i, 0, -1):
        TotalN = TotalN + x * kelipatan

        if x == i:
            print(f"({x} * {kelipatan})", end="")
        else:
            print(f" + ({x} * {kelipatan})", end="")

    print(f" = {TotalN}")
    hasil = hasil + TotalN

print(f"Jumlah dari semua baris = {hasil}")
