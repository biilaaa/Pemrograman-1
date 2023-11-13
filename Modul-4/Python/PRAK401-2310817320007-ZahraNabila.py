x, simbol = input("Masukkan Bilangan Kelipatan dan Simbol Pengganti : \n").split()
x = int(x)

print("Bilangan Kelipatan yang Sudah Dirubah Menjadi Simbol   :")

for i in range(1, 51):
    if i % x == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")