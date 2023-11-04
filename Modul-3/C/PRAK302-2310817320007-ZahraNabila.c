#include <stdio.h>

int main()
{
    int x;
    printf("Masukkan Nilai : ");
    scanf("%d", &x);

    {
        if ( x >= 80 )
        {
            printf("Predikat Nilai : A\n");
        }
        else if ( x >= 70 && x <= 79 )
        {
            printf("Predikat Nilai : B\n");
        }
        else if ( x >= 60 && x <= 69 )
        {
            printf("Predikat Nilai : C\n");
        }
        else if ( x >= 50 && x <= 59 )
        {
            printf("Predikat Nilai : D\n");
        }
        else if ( x < 50 )
        {
            printf("Predikat Nilai : E\n");
        }
    }
    return 0;
}