
#include<stdio.h>

int main()
{
    int sayi[10],a,i,sonuc=0,sayac=0;
    
    for (i=0; i<10; i++){
        
        printf("Bir deger girin: ");
        scanf("%d",&a);
        sayac++;
        
        if(a!=-1){
            sayi[i]=a;
        }
        else{
            sayac--;
            for (i=0; i<sayac; i++){
                sonuc=sayi[i]*sayi[i];
                printf("Sonuc: %d\n",sonuc);
            }
        }
    }
  return 0;
}
