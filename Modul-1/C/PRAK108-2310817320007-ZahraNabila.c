#include <stdio.h>

int main()
{
    float JumlahPutaran, jarak;

printf("Diketahui : \n");

printf("Pak Dengklek mengelilingi taman = ");
scanf("%f", &JumlahPutaran);

printf("Jarak tempuh Pak Dengklek = ");
scanf("%f", &jarak);

    float r = jarak / JumlahPutaran;
    float HasilKeliling = r / ( 2 * 3.14);

printf("Jawaban : \n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah = %.2f\n", HasilKeliling);

    return 0;
}