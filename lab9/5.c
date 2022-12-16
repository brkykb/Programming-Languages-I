#include <stdio.h>
#include <math.h>

int main() {
 
    printf("**Girilen sayinin bir formulunu hesaplayan program**\n\n\n");
    
    double c,sayi,b,a,n,d=1,sum=0;
    
    printf("Sayiyi ve kaca kadar gidecegini giriniz: ");
    scanf("%lf %lf",&sayi,&a);
    
    for (b=2; b<=a; b++){
        c=pow(sayi,b);
    
        for (n=b; n>0; n--){
            d=n*d;
        }
            sum=sum+(c/d);
    }
    if (a==1){
        printf("%f",1+sayi);
    }
    if (a>1){
        printf("%f",(1+sayi+sum));
    }
    return 0;
}
