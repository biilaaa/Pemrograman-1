#include <stdio.h>
int reverse(int a)
{
    // Lengkapi Function ini
    int rev = 0;

    while (a != 0)
    {
        rev = rev * 10;
        rev = rev + a % 10;
        a = a / 10;
    }
    return rev;
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
}
