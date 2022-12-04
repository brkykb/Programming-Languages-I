
#include <stdio.h>
#include <math.h>

int main() {
    
    int s,i,a;
    double d=0,sayi,c;
    
    printf("Sayiyi giriniz: ");
    scanf("%lf",&sayi);
    
    a=sayi;
    s=(a%10);
    for (i=sayi; i>9; i=i/10){
        d++;
    }
    c = pow(10,d);
    sayi=sayi-(c*i)-s;
    sayi=sayi+(c*s)+i;
    printf("%f\n",sayi);
        
    return 0;
}
