#include <stdio.h>
#include <math.h>

int main() {
 
    printf("**Girilen sayinin bir formulunu hesaplayan program**\n\n\n");
    
    int e=0;
    double c,sayi,b,a,n,d=1,sum=0;
    
    printf("Sayiyi ve kaca kadar gidecegini giriniz: ");
    scanf("%lf %lf",&sayi,&a);
    
    for (b=2; b<=a; b+=2){
        c=pow(sayi,b);
        e++;
        for (n=b; n>0; n--){
            d=n*d;
        }
        if (e%2!=0){
            sum=sum-(c/d);
        }
        else{
            sum=sum+(c/d);
        }
    }
    printf("%f",1+sum);
    return 0;
}
