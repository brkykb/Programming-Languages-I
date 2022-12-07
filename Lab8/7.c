
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&a);
    
    printf("İkinci sayiyi giriniz: ");
    scanf("%d",&b);
    
    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d",&c);
    
    if (a>b)
        if (a>c)
            printf("En buyuk sayi: %d",a);
        else
            printf("En buyuk sayi: %d",c);
    else
        if (b>c)
            printf("En buyuk sayi: %d",b);
        else
            printf("En buyuk sayi: %d",c);
 return 0;
}

