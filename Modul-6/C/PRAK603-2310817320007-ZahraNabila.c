#include <stdio.h>

int main()
{
    int Baris1, Baris2, x, Isi, Hasil;
    scanf("%d %d", &Baris1, &Baris2);

    int bil1[Baris1], bil2[Baris1];
    if (Baris1 == Baris2)
    {
        for (x = 0; x < Baris1; x++)
        {
            scanf("%d", &Isi);
            bil1[x] = Isi;
        }
        for (x = 0; x < Baris1; x++)
        {
            scanf("%d", &Isi);
            bil2[x] = Isi;
        }
        for (x = 0; x < Baris1; x++)
        {
            Hasil = bil1[x] * bil2[x];
            printf("%d ", Hasil);
        }
    }
    else
    {
        printf("Jumlah tidak sama");
    }
    return 0;
}