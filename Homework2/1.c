
#include <stdio.h>

int main() {
    
    printf("***Dikdortgenin alanini ve cevresini hesaplayan program***\n\n\n");
    int u,k,a,c;
    printf("Bir kenar uzunlugunu giriniz: ");
    scanf("%d",&u);
    
    printf("İkinci kenar uzunlugunu giriniz: ");
    scanf("%d",&k);
    
    a=u*k;
    c=2*(u+k);
    
    printf("Dikdortgenin alani: %d\n",a);
    printf("Dikdortgenin cevresi: %d",c);
    
    return 0;
}
