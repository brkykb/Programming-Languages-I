
#include <stdio.h>

int main() {
    
    int a,b,i;
    
    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&a);
    
    printf("İkinci sayiyi giriniz: ");
    scanf("%d",&b);
    
    if (a>b)
        for (i=b; i>0; i--){
            if (a%i==0 && b%i==0){
                printf("En buyuk ortak kat %d",i);
                break;
            }
        }
    if (b>a)
        a=a+b;
        b=a-b;
        a=a-b;
        for (i=b; i>0; i--){
            if (a%i==0 && b%i==0){
                printf("En buyuk ortak kat %d",i);
                break;
            }
        }
    
    return 0;
}
