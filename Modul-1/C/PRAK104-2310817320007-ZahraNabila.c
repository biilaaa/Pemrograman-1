#include <stdio.h>

int main ()
{

    int hargaA;
printf("Harga sepatu A adalah = ");
scanf("%d", &hargaA);

    int hargaB;
printf("Harga sepatu B adalah = ");
scanf("%d", &hargaB);


    float hargaADiskon=0.13;
    float hargaBDiskon=0.21;

printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi = %.0f\n", hargaA - ( hargaA * hargaADiskon));
printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi = %.0f\n", hargaB - ( hargaB * hargaBDiskon));

    return 0;
}