#include<stdio.h>
int main()
{
    int code1,unit1,code2,unit2;
    float price1,price2,VALOR_A_PAGAR;
    scanf("%d%d%f",&code1, &unit1, &price1);
    scanf("%d%d%f",&code2, &unit2, &price2);
    VALOR_A_PAGAR=unit1*price1+unit2*price2;
    printf("VALOR_A_PAGAR: R$ %.2f",VALOR_A_PAGAR);
}
