#include <stdio.h>
#include <math.h>
 
int main() {
 
    printf("**Girilen sayidan 1 e kadar armstrong olan sayilari yazdiran program**\n\n");
    
    int sayi,sum=0,a,c,g,b;
    double s=0,e;
    printf("Sayiyi giriniz: ");
    scanf("%d",&a);
    
    b=a;
    for (b=a; b>0; b--){
        for (sayi=b; sayi>0; sayi=sayi/10){
            s++;
        }
            for (g=b; g>0; g=g/10){
                c=g%10;
                e=pow(c,s);
                sum=sum+e;
            }
        if (b==sum){
            printf("Armstrong sayilar: %d\n",b);
        }
        sum=0;
        s=0;
    }
    return 0;
 
}
