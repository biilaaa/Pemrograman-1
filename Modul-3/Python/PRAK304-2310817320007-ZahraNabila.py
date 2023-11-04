x = int(input("Masukkan Bilangan : "))

if x == 0:
    print("Termasuk Bilangan : Nol")
    
elif 0 < x <= 9:
    print("Termasuk Bilangan : Satuan")

elif 10 < x < 20:
    print("Termasuk Bilangan : Belasan")

elif x == 10:
    print("Termasuk Bilangan : Puluhan")

elif 20 <= x < 100:
    print("Termasuk Bilangan : Puluhan")

elif x >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")
