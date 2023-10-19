#include <stdio.h>

int main()
{
    float NilaiPertama, NilaiKedua, Jumlah;

    printf ("Masukkan Nilai Pertama  : ");
    scanf ("%f", &NilaiPertama);

    printf ("Masukkan Nilai Kedua    : ");
    scanf ("%f", &NilaiKedua);

    Jumlah = NilaiPertama + NilaiKedua;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", NilaiPertama, NilaiKedua, Jumlah);

    return 0;
}