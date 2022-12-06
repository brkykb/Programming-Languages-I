#include <stdio.h>

int main() {
 
    printf("**Girilen sayidan 1 e kadar olan guclu sayilari yazdiran program**\n\n\n");
    
    int sayi,a,b,c,s=1,sum=0,d;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&d);
    
    for (sayi=d; sayi>0; sayi--){
        for (a=sayi; a>0; a=a/10){
            b=a%10;
            for (c=b; c>0; c--){
                s=s*c;
            }
            sum=sum+s;
            s=1;
        }
        if (sum==sayi){
            printf("%d\n",sayi);
        }
        sum=0;
    }
    
    return 0;
 
}
