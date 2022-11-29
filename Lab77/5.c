
#include <stdio.h>

int main()
{
    int para,a,b,c,d;
    
    printf("10'un bir katı olacak şekilde para miktarını giriniz: ");
    scanf("%d",&para);
    
    a=para/100;
    para=para-(a*100);
    
    b=para/50;
    para=para-(b*50);
    
    c=para/20;
    para=para-(c*20);
    
    d=para/10;
    para=para-(d*10);
    
    printf("100 lük banknot sayisi %d",a);
    printf("\n50 lilik banknot sayisi %d",b);
    printf("\n20 lik banknot sayisi %d",c);
    printf("\n10 luk banknot sayisi %d",d);
    
    return 0;
}
