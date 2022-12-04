
#include <stdio.h>

int main()
{
    int a,b,c,i;
    printf("Kucuk sayiyi giriniz: ");
    scanf("%d",&a);
    
    printf("Buyuk sayiyi giriniz: ");
    scanf("%d",&b);
    
    printf("Kacar kacar artacagini giriniz: ");
    scanf("%d",&c);
    
    for (i=a; i<=b; i+=c)
        printf("\n %d",i);
    
 return 0;
}

