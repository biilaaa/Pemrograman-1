#include <stdio.h>

int main()
{
    int sisiTegak, sisiDatar, sisiMiring;

printf("Diketahui : \n");

printf("Masukkan nilai sisi tegak = " );
scanf("%d", &sisiTegak);

printf("Masukkan nilai sisi datar = " );
scanf("%d", &sisiDatar);

printf("Masukkan nilai sisi miring = " );
scanf("%d", &sisiMiring);

    int HargaTanahPerMeter = 85000;
    int KelilingTanah = sisiTegak + sisiDatar + sisiMiring;
    int JumlahPembayaran = HargaTanahPerMeter * KelilingTanah;

printf("Panjang sisi segitiga berturut-turut adalah = %d, %d, %d \n", sisiTegak, sisiDatar, sisiMiring);
printf("Keliling Tanah Pak Dengklek adalah = %d\n", KelilingTanah);
printf("Harga tanah Per Meter = %d\n", HargaTanahPerMeter);

printf("Jawaban : \n");

printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", JumlahPembayaran);

    return 0;
}
