#include <stdio.h>

int main() {
    
    printf("**Girilen sayiyi bolme operatoru kullanmadan bolumunu ve kalanini yazdiran program**\n\n");
    
    int sayi,b=0,k,bolme,i;
    
    printf("Sayiyi ve bolmek istediginiz degeri giriniz: ");
    scanf("%d %d",&sayi,&bolme);
    
    for (i=sayi; i>=bolme; i-=bolme){
        b++;
    }
    k=i;
    printf("Bolum= %d\n",b);
    printf("Kalan= %d\n",k);
    
    return 0;
}
