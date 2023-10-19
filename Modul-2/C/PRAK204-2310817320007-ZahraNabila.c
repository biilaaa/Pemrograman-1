#include <stdio.h>
#define phi 3.142857

int main()
{
    float r, t, Volume, Luas, Keliling;

    scanf("%f %f", &r, &t);

    Volume      = phi*r*r*t;
    Luas        = 2*phi*r*(r + t);
    Keliling    = 2*phi*r;

    printf("Volume      = %.2f\n", Volume);
    printf("Luas        = %.2f\n", Luas);
    printf("Keliling    = %.2f\n", Keliling);

    return 0;
}