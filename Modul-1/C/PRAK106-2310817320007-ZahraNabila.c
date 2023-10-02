#include <stdio.h>

int main ()
{
    int a, b, c;

printf("Variabel a bernilai = ");
scanf("%d", &a);

printf("Variabel b bernilai = ");
scanf("%d", &b);

printf("Variabel c bernilai = ");
scanf("%d", &c);

    int aSamaDenganb = a == b;
    int bLebihBesarDaric = b > c;
    int aTidakSamaDenganc = a != c;

printf("Apakah a sama dengan b ? jawabannya adalah %d\n", aSamaDenganb);
printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", bLebihBesarDaric);
printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", aTidakSamaDenganc);

    return 0;
}