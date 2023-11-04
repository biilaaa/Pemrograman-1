#include <stdio.h>

int main() 
{
    int a, b;

    printf("Masukkan Angka Acak : ");
    scanf("%d %d", &a, &b);

    if (a <= b) 
    { 
        printf("Angka Berurutan     : %d %d\n", a, b); 
    }
    else if (a >= b)
    { 
        printf("Angka Berurutan     : %d %d\n", b, a); 
    }
    return 0;
}