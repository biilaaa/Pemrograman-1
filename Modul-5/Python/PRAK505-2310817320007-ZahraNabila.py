def Biodata(tahunLahir, Nama, Asal):

    tahun_sekarang = 2020

    Umur = tahun_sekarang - tahunLahir

    print("Perkenalkan Nama Saya :", Nama)
    print("Umur Saya             :", Umur)
    print("Saya Adalah Angkatan  :", tahun_sekarang)
    print("Asal Saya dari        :", Asal)

tahunLahir = int(input())
Namaku = input()
Asal = input()

Biodata(tahunLahir, Namaku, Asal)