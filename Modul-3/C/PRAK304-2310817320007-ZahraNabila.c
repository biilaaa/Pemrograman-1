#include <stdio.h>

int main()
{
    int x;
    printf("Masukkan Bilangan : ");
    scanf("%d", &x);

    {
        if ( x == 0)
        {
            printf("Termasuk Bilangan : Nol");
        }
        else if ( x >= 1 && x <= 9)
        {
            printf("Termasuk Bilangan : Satuan");
        } 
        else if (x > 10 && x < 20) 
        {
            printf("Termasuk Bilangan : Belasan");
        } 
        else if ( x == 10 )
        {
            printf("Termasuk Bilangan : Puluhan");
        } 
        else if ( x >= 20 && x < 100 )
        {
            printf("Termasuk Bilangan : Puluhan");
        } 
        else if ( x >= 100 )
        {
            printf("Anda Menginput Melebihi Limit Bilangan");
        } 
    }
}       