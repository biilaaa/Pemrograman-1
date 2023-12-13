#include <stdio.h>

int main()
{
    int x, y, Matriks, Baris, Kolom;
    scanf("%d %d", &Baris, &Kolom);

    int Num[Baris][Kolom];
    for (x = 0; x < Baris; x++)
    {
        for (y = 0; y < Kolom; y++)
        {
            scanf("%d", &Matriks);
            Num[x][y] = Matriks;
        }
    }

    for (x = 0; x < Baris; x++)
    {
        for (y = 0; y < Kolom; y++)
        {
            printf("%d ", Num[x][y]);
        }
        printf("\n");
    }
    return 0;
}