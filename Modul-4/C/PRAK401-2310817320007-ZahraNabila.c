#include <stdio.h>

int main()
{
    int x, i;
    char simbol[10];
    printf("Masukkan Bilangan Kelipatan dan Simbol Pengganti : \n");
    scanf( "%d %s", &x, &simbol);

    printf("Bilangan Kelipatan yang Sudah Dirubah Menjadi Simbol : \n");

    for( i = 1; i < 51; i++ )
    {
        if(i % x == 0)
        {
            printf("%s ", simbol);
        }
        else
        { 
            printf("%d ", i);
        }
    }
    return 0;
}