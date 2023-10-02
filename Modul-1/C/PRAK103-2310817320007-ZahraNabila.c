#include <stdio.h>

int main () 
{
    float a, b, x, y;

printf("Variabel a bernilai = ");
scanf("%f", &a);

printf("Variabel b bernilai = ");
scanf("%f", &b);

printf("Variabel x bernilai = ");
scanf("%f", &x);

printf("Variabel y bernilai = ");
scanf("%f", &y);

    float hasil= (a+b),hasil1= hasil *x/y;

printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f\n",hasil1);

    return 0;
}