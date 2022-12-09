#include <stdio.h>

int main() {
    
    printf("**Girilen 10 adet sayidan en buyuk ve en kucuk olanlari yazdiran program**\n\n");
    
    int sayi,s,enb=0,enk=0;
    for (s=1; s<11; s++){
        printf("%d. sayiyi giriniz: ",s);
        scanf("%d",&sayi);
        
        if (sayi>=enb){
            enb=sayi;
        }
        if (sayi<=enk){
            enk=sayi;
        }
    }
    printf("Girilen en buyuk sayi %d\n",enb);
    printf("Girilen en kucuk sayi %d\n",enk);

    return 0;
}
