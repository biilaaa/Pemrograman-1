Baris1, Baris2 = map(int, input().split())

if(Baris1 != Baris2):
    print("Jumlah tidak sama")

else:
    Bil1 = list(map(int, input().split()))
    Bil2 = list(map(int, input().split()))

    for x in range (Baris1):
        print(Bil1[x] * Bil2[x], end=' ')
