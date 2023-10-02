print(f"Diketahui : ")

sisiTegak = int (input("Masukkan nilai sisi tegak = " ))

sisiDatar = int (input("Masukkan nilai sisi datar = " ))

sisiMiring = int(input("Masukkan nilai sisi miring = " ))

HargaTanahPerMeter = 85000
KelilingTanah = sisiTegak + sisiDatar + sisiMiring
JumlahPembayaran = HargaTanahPerMeter * KelilingTanah

print(f"Panjang sisi segitiga berturut-turut adalah = {sisiTegak, sisiDatar, sisiMiring}")
print(f"Keliling Tanah Pak Dengklek adalah = {KelilingTanah}")
print(f"Harga tanah Per Meter = {HargaTanahPerMeter}")

print(f"Jawaban : ")

print(f"Biaya yang diperlukan Pak Dengklek adalah : Rp {JumlahPembayaran}")
