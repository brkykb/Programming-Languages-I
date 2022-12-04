#include <stdio.h>
#include <math.h>

int main() {
    
    printf("***Girilen sayinin log unu bulan program***\n\n\n");
    float a,b,sonuc;
    
    printf("Sayiyi giriniz: ");
    scanf("%f",&b);
    
    printf("Taban degerini giriniz: ");
    scanf("%f",&a);
    
    if (a>1){
        
        sonuc = log10f(b)/(log10f(a));
        
        printf("%f\n",sonuc);
    }
    else
        printf("Lutfen tabana 1 vaye 0 dan farklı bir deger giriniz \n");
    
    return 0;
}
