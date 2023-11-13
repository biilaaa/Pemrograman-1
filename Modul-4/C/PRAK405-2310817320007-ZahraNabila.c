#include <stdio.h>

int main()
{
    int n, kelipatan;
    int hasil = 0;

    printf("Masukkan Jumlah Baris  = ");
    scanf("%d", &n);

    printf("Masukkan Kelipatan     = ");
    scanf("%d", &kelipatan);

    for (int i = 1; i <= n; i++) 
    {
        int TotalN = 0;

        for (int x = i; x > 0; x--)
        {

           TotalN = TotalN + x * kelipatan;
            if (x == i)
            {
                printf("(%d * %d)", x, kelipatan);
            }
            else
            {
                printf(" + (%d * %d)", x, kelipatan);
            }
        }
        printf(" = %d\n", TotalN);
        hasil = hasil + TotalN;
    }
    printf("Jumlah dari semua baris = %d\n", hasil);
    return 0;
}