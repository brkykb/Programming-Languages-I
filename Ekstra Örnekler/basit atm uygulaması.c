#include <stdio.h>

int main(void)
{
    printf("**ATM**\n\n");
    
    int sayi,miktar,bakiye=1000,yenibakiye;
    printf("1-Hesap bakiyesi ogrenme \n2-Para yatirma \n3-Para cekme \n0-Cikis \n");
    scanf("%d",&sayi);
    
    switch(sayi){
            
        case 0:
            break;
        case 1:
            printf("Hesap bakiyeniz: %d\n",bakiye);
            break;
        case 2:
            printf("Yatirmak istediginiz miktari giriniz: ");
            scanf("%d",&miktar);
            yenibakiye=bakiye+miktar;
            printf("Para yatirma islemi basarili\n");
            printf("Mevcut bakiyeniz: %d\n",yenibakiye);
            break;
        case 3:
            printf("Cekmek istediginiz miktari giriniz: ");
            scanf("%d",&miktar);
            if (miktar<=bakiye){
                yenibakiye=bakiye-miktar;
                printf("Para cekme islemi basarili\n");
                printf("Kalan bakiyeniz: %d\n",yenibakiye);
                break;
            }
            else
                printf("Mevcut bakiyenizden fazla para cekemezsiniz\n");
        default:
            printf("Yanlis bir deger girdiniz\n");
    }
  return 0;
}
