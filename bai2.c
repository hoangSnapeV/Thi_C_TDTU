#include <stdio.h>

int main()
{
    int n;
    printf("N: ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("Nhap sai, nhap lai ");
        printf("\nN: ");
        scanf("%d", &n);
    }

    float s = 0.0;
    float b = 1;

    for(int i = 2; i <= (n + 1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            b = b * j;
        }
        
        s = s + 1 / b * 1.0;
        b = 1;
    }

    printf("S = %.6f", s);
    return 0;
}