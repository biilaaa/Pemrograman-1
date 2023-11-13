while True:
    print("Pilih Program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    Pilihan = int(input("Masukkan Pilihan       : "))

    if 1 <= Pilihan <= 4:
        NilaiA = float(input("Masukkan Nilai Pertama : "))
        NilaiB = float(input("Masukkan Nilai Kedua   : "))

        if Pilihan == 1:
            print(f"Hasil Penjumlahan antara {NilaiA:.2f} dengan {NilaiB:.2f} adalah {NilaiA + NilaiB:.2f}")
        elif Pilihan == 2:
            print(f"Hasil Pengurangan antara {NilaiA:.2f} dengan {NilaiB:.2f} adalah {NilaiA - NilaiB:.2f}")
        elif Pilihan == 3:
            print(f"Hasil Perkalian antara {NilaiA:.2f} dengan {NilaiB:.2f} adalah {NilaiA * NilaiB:.2f}")
        elif Pilihan == 4:
            if NilaiB != 0:
                print(f"Hasil Pembagian antara {NilaiA:.2f} dengan {NilaiB:.2f} adalah {NilaiA / NilaiB:.2f}")
            else:
                print("ERROR : Tidak dapat membagi dengan 0")

    elif Pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Zahra Nabila")
        break
    else:
        print("Input anda salah, silahkan coba lagi")
