#include<stdio.h>
int main()
{
    int a,b,s,maior;
    scanf("%d%d%d",&a,&b,&s);
    maior=(a+b+abs(a-b))/2;
    printf("%d eh o maior",maior);
}
