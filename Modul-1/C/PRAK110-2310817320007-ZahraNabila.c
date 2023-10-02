#include <stdio.h>
#include <math.h>

int main()
{

printf("Diketahui : \n");

    int a, t, sisiA, sisiB, sisiC;

printf("Alas = ");
scanf("%d", &a);

printf("Tinggi = ");
scanf("%d", &t);

sisiA = t;
sisiB = sqrt(pow(a, 2) + pow(t, 2));
sisiC = a;

    int KelilingSegitiga = sisiA + sisiB + sisiC;
    int LuasSegitiga = 0.5 * a * t;

printf("Jawab : \n");

printf("Sisi A = %d cm\n", sisiA);
printf("Sisi B = %d cm\n", sisiB);
printf("Sisi C = %d cm\n", sisiC);

printf("Keliling = %d cm\n", KelilingSegitiga);
printf("Luas = %d cm\n", LuasSegitiga);

    return 0;
}