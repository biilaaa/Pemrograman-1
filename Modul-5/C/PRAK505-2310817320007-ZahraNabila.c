#include <stdio.h>

void Biodata(int tahunLahir, char Nama[], char Asal[])
{
    int tahun_sekarang = 2020;
    // Lengkapi Function ini
    int Umur = tahun_sekarang - tahunLahir;

    printf("Perkenalkan Nama Saya : %s\n", Nama);
    printf("Umur Saya             : %d\n", Umur);
    printf("Saya Adalah Angkatan  : %d\n", tahun_sekarang);
    printf("Asal Saya dari        : %s\n", Asal);
}

int main()
{
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf(" %d", &tahunLahir);
    scanf(" %[^\n]%*c", &Namaku);
    scanf(" %[^\n]%*c", &Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}