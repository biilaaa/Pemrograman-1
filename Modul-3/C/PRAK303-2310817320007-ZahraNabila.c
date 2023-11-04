#include <stdio.h>

int main()
{
    int N;
    printf("Masukkan Bilangan : ");
    scanf("%d", &N);

    {
        if ( N > 0 )
        {
            printf("Bilangan          : Positif\n");
        } 
        else if ( N < 0 ) 
        {
            printf("Bilangan          : Negatif\n");
        } 
        else if ( N == 0 )
        {
            printf("Bilangan          : Nol\n");
        }
    }
    return 0;
}