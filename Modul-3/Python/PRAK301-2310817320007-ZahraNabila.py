a = int(input("Masukkan Angka Pertama   : "))
b = int(input("Masukkan Angka Kedua     : "))

if a <= b:
    pertama = a
    kedua   = b
else:
    pertama = b
    kedua   = a

print(f"Angka Berurutan          : {pertama} {kedua}")
