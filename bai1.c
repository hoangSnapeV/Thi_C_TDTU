#include <stdio.h>
#define pi 3.141593 
int main()
{   
    int r, h;
    printf("r: ");
    scanf("%d", &r);

    printf("h: ");
    scanf("%d", &h);

    float s = pi * (r * r + h * h) * 1.0;
    float v = (pi * h / 6) * (3 * r * r + h * h) * 1.0;

    printf("S = %.4f\n", s);
    printf("V = %.4f\n", v);

    return 0;
}