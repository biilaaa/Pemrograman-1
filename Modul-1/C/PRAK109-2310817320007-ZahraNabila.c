#include <stdio.h>

int main()
{
    int p, q;

printf("Jumlah pasukan yang dibawa Yu Zhong = ");
scanf("%d", &p);

printf("Jumlah pahlawan = ");
scanf("%d", &q);

    int jumlahPasukan = p/q;

printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah = %d\n", jumlahPasukan);

    return 0;
}