#include<stdio.h>
main()
{
    char Name[50];
    double salary,TOTAL,products_sold;
    scanf("%s",Name);
    scanf("%lf",&salary);
    scanf("%lf",&products_sold);
    TOTAL=products_sold*0.15+salary;
    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;
}
