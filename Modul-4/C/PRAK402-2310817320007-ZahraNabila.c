#include <stdio.h>

int main()
 {
    int BatasBil;

    printf("Masukkan Maksimal Batas Bilangan    : ");
    scanf("%d", &BatasBil);

    printf("Urutan Bilangan Ganjil              : ");
    for ( int i = 1; i <= BatasBil; i++)
        {
            if (i % 2 != 0)
            printf("%d ", i);
        }
    
    printf("\nUrutan Bilangan Genap Terbalik      : ");
     for (int i = BatasBil; i >= 1; i--)
    {
        if (i % 2 == 0)
        printf("%d ", i);
    }
    return 0;
}
