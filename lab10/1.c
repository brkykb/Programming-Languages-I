
#include<stdio.h>

int main()
{
    int i;
    float a[8],toplam=0,sonuc;
    for (i=0; i<8; i++){
        printf("Deger giriniz: ");
        scanf("%f",&a[i]);
        toplam+= a[i];
    }
    sonuc=toplam/8;
    printf("Sonuc: %f",sonuc);
    
  return 0;
}
