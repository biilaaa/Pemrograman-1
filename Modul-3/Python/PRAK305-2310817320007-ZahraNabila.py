Detik = int(input("Masukkan Jumlah Detik = "))

Hari = Detik // ( 24 * 3600 )
Jam = ( Detik % ( 24 * 3600 )) // 3600
Menit = ( Detik % 3600 ) // 60
sisaDetik = Detik % 60

if Detik >= 86400:
    print(f'Konfersi Waktu        = {Hari} hari {Jam:02d}:{Menit:02d}:{sisaDetik:02d}')

else:
    print(f'Konfersi Waktu        = {Jam:02d}:{Menit:02d}:{sisaDetik:02d}')