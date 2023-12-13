#include <stdio.h>

int main()
{
    int x, Ruangan, Isi;
    scanf("%d", &Ruangan);

    int angka[Ruangan];
    for (x = 0; x < Ruangan; x++)
    {
        scanf("%d", &Isi);
        angka[x] = Isi;
    }

    for (x = 0; x < Ruangan; x++)
    {
        printf("%d ", angka[x] * (x + 1));
    }

    return 0;
}