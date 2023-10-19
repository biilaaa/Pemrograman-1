#include <stdio.h>
#include <math.h>

int main()
{
    int sisiA, sisiB;

    scanf("%d %d", &sisiA, &sisiB);

    int Alas        = sqrt(pow(sisiB, 2) -  (pow(sisiA, 2)));
    int Tinggi      = sisiA;
    int Keliling    = sisiA + sisiB + Alas;
    int Luas        = 0.5 * Alas * sisiA;

    printf("Alas        = %d cm \n", Alas);
    printf("Tinggi      = %d cm \n", Tinggi);
    printf("Keliling    = %d cm \n", Keliling);
    printf("Luas        = %d cm^2 \n", Luas);

    return 0;
}