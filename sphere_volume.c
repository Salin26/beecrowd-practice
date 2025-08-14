#include<stdio.h>
#define pi 3.14159
int main()
{
    double volume,r;
    scanf("%lf",&r);
    volume=(4.0/3.0)*pi*r*r*r;
    printf("volume = %.3f\n",volume);
    return 0;
}
