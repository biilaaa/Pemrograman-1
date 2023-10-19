#include <stdio.h>

int main()
{
    char nama[30], nim[30], kelasParalel[30], tempatTanggalLahir[30], alamat[50], hobby[30], noHp[30];

    printf("Nama                 : ");
    gets (nama);

    printf("NIM                  : ");
    gets (nim);

    printf("Kelas Paralel        : ");
    gets (kelasParalel);

    printf("Tempat Tanggal Lahir : ");
    gets (tempatTanggalLahir);

    printf("Alamat               : ");
    gets (alamat);

    printf("Hobby                : ");
    gets (hobby);

    printf("No HP                : ");
    gets (noHp);

    return 0;
}