#include <stdio.h>

int main() 
{
    int Hari, Jam, Menit, Detik, sisaDetik;

    printf("Masukkan Jumlah Detik = ");
    scanf("%d", &Detik);

    Hari = Detik / ( 24 * 3600 );
    Jam = ( Detik % ( 24 * 3600 )) / 3600;
    Menit = ( Detik % 3600 ) / 60;
    sisaDetik = Detik % 60;

        if (Detik >= 86400)
        {
            printf("Konfersi Waktu        = %d hari %02d:%02d:%02d\n", Hari, Jam, Menit, sisaDetik);
        }
        else
        {
            printf("Konfersi Waktu        = %02d:%02d:%02d\n", Jam, Menit, sisaDetik);
        }
    return 0;
}