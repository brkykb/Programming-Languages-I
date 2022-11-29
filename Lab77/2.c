
#include <stdio.h>

int main()
{
    int a,b;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&a);
    
    printf("İkinci sayiyi giriniz: ");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("Birinci sayi: %d",a);
    printf("\nİkinci sayi: %d",b);
    
    return 0;
}
