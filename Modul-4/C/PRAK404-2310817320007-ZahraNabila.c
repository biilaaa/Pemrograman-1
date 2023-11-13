#include <stdio.h>

int main()
{
   int Pilihan;
   float NilaiA, NilaiB;

  while (1)
  {
    printf("Pilih Program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");

    printf("Masukkan Pilihan       : ");
    scanf("%d", &Pilihan);

    if (Pilihan > 0 && Pilihan < 5)
    {
      printf("Masukkan Nilai Pertama : ");
      scanf("%f", &NilaiA);

      printf("Masukkan Nilai Kedua   : ");
      scanf("%f", &NilaiB);

      switch (Pilihan)
      {
      case 1:
        printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", NilaiA, NilaiB, NilaiA + NilaiB);
        break;
      case 2:
        printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", NilaiA, NilaiB, NilaiA - NilaiB);
        break;
      case 3:
        printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", NilaiA, NilaiB, NilaiA * NilaiB);
        break;
      case 4:
        if (NilaiB != 0)
        {
          printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", NilaiA, NilaiB, NilaiA / NilaiB);
        }
        else
        {
          printf("ERROR : Tidak dapat membagi dengan 0\n");
        }
        break;
      }
    }
    else if (Pilihan == 5)
    {
      printf("Terimakasih, telah menggunakan kalkulator Zahra Nabila\n");
      break;
    }
    else
    {
      printf("Input anda salah, silahkan coba lagi\n");
    }
  }
    return 0;
}