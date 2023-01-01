#include <stdio.h>

int main() {
    printf("Girilen ogrenci numarasindaki pozitif ve negatif olan sayilari yazdiran program**\n\n");
    
    int a[20],b[20],i=0,sayi1,sayi2,s;
    
    printf("Ogrenci numarasini giriniz: ");
    scanf("%d",&sayi1);
    
    sayi2=sayi1;
    
    while (sayi2>0){
        b[i]=sayi2%10;
        sayi2/=10;
        i++;
    }
    for(i=0; i<20; i++){
        if(b[i]%2==0){
            for(s=9; s>=0; s--){
                if(b[i]==s){
                    printf("Cift: %d\n",b[i]);
                }
            }
        }
        else{
            for(s=9; s>=0; s--){
                if(b[i]==s){
                    printf("Tek: %d\n",b[i]);
                }
            }
        }
    }
  return 0;
}




