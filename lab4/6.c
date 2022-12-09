#include <stdio.h>

int main() {
    
    printf("**Girilen maas ve parca sayisina gore  verilmesi gereken maasi yazdiran program**\n\n");
    
    int m,ps,a=0;
    
    printf("Sabit maası giriniz: ");
    scanf("%d",&m);
    
    printf("Parca sayisini giriniz: ");
    scanf("%d",&ps);
    
    if (ps>0 && ps<10){
        a=ps*5000;
    }
    if (ps>=10 && ps<30){
        a=ps*8000;
    }
    if (ps>=30){
        a=ps*12000;
    }
    m=m+a;
    printf("Odenmesi gereken maas %d\n",m);

    return 0;
}
