#include <stdio.h>

// Buatlah Function Disini
int MaxBilangan(int a, int b, int c, int d)
{
    int MaxBil = a;

    if (MaxBil < b)
    {
        MaxBil = b;
    }

    if (MaxBil < c)
    {
        MaxBil = c;
    }

    if (MaxBil < d)
    {
        MaxBil = d;
    }

    return MaxBil;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);

    return 0;
}
