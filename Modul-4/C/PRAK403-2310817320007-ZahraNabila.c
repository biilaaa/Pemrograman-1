#include <stdio.h>

int main()
{
    int bil1, bil2;
    int Batas;

    printf("Masukkan Angka Pertama dan Angka Kedua : ");
    scanf("%d %d", &bil1, &bil2);

    Batas = (bil1 - bil2);
    if (Batas < 0)
    {
        Batas = Batas * -1;
        printf("Urutan Angka Terbesar ke Terkecil      : ");
        for (int i = 0; i <= Batas; i++)
        {
            printf("%d %d", bil1, bil2);

            bil1 = bil1 + 1;
            bil2 = bil2 - 1;
            if (i < Batas)
            {
                printf(" - ");
            }
        }
    }
    else if (Batas > 0)
    {
        Batas = Batas * 1;
        printf("Urutan Angka Terkecil ke Terbesar      : ");
        for (int i = 0; i <= Batas; i++)
        {
            printf("%d %d ", bil1, bil2);

            bil1 = bil1 - 1;
            bil2 = bil2 + 1;
            if (i < Batas)
            {
                printf(" - ");
            }
        }
    }
    return 0;
}