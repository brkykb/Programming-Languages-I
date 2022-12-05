#include <stdio.h>
 
int main() {
 
    int sayi1, sayi2, kucukSayi;
    int i, ebob = 1, sonuc;
 
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);
 
    if (sayi1 < sayi2)
        kucukSayi = sayi1;
    else
        kucukSayi = sayi2;
 
 
    for (i = 2; i <= kucukSayi; i++) {
        if (sayi1 % i == 0 && sayi2 % i == 0)
            ebob = i;
    }
    sonuc = (sayi1 * sayi2) / ebob;
    
    printf("OKEK(%d,%d) = %d", sayi1, sayi2, sonuc);
    return 0;
 
}
