nilaiPertama = float(input("Masukkan Nilai Pertama  : "))
nilaiKedua   = float(input("Masukkan Nilai Kedua    : "))

jumlah = nilaiPertama + nilaiKedua

nilaiPertama = ( f"{int(nilaiPertama)}" if nilaiPertama.is_integer() else f"{nilaiPertama:.2f}")

print(f'Hasil dari penjumlahan nilai pertama "{nilaiPertama}" dan nilai kedua "{nilaiKedua}" adalah "{jumlah :.2f}"')
