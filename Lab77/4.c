
#include <stdio.h>

int main()
{
    int a,b,c,alan;
    
    printf("Dairenin yaricapini giriniz: ");
    scanf("%d",&a);
    
    printf("İslem türünü girin 1 ya da 2 olmalı");
    scanf("%d",&b);
    
    c=2*3*a;
    alan=3*(a*a);
    if (b==1)
     printf("Dairenin cevresi: %d",c);
    if (b==2)
     printf("Dairenin alani: %d",alan);
    else
     printf("Yanlis giris");
    return 0;
}
