#include <stdio.h>
#include <math.h>

int main() {
 
    printf("**Girilen sayinin bir formulunu hesaplayan program**\n\n\n");
    
    double c,sayi,b,a,n,d=1,sum=0;
    
    printf("Sayiyi ve kaca kadar gidecegini giriniz: ");
    scanf("%lf %lf",&sayi,&a);
    
    for (b=5; b<=a; b+=2){
        c=pow(sayi,b);
    
            sum=sum+c;
    }
    if (a==3){
        printf("%f\n",sayi-(sayi*sayi*sayi));
    }
    if (a==1){
        printf("%f\n",sayi);
    }
    if (a>3){
        printf("%f\n",sayi-(sayi*sayi*sayi)+sum);
    }
    return 0;
}
