hargaA = int(input("Harga sepatu A adalah = "))
hargaB = int(input("Harga sepatu B adalah = "))


hargaADiskon=0.13
hargaBDiskon=0.21

print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi  {hargaA - ( hargaA * hargaADiskon ):.0f}")
print(f"Sepatu A mendapat diskon 21% sehingga harganya menjadi  {hargaB - ( hargaB * hargaBDiskon ):.0f}")
