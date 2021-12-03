#include<stdio.h>
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    while (n <= 0)
    {
        printf("nhap sai, nhap lai: ");
        scanf("%d",&n);
    }

    float giaithua=1;
    float sum = 0;
    int i;
    for ( i = 1; i <= n ; i++)
    {
        giaithua = giaithua *(i+1);
        sum = sum + 1.0/giaithua;
    }
    printf("S=%.6f",sum);
    
    return 0;   
}