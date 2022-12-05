#include <stdio.h>
 
int main() {
 
    printf("Asal Sayi Bulan Program\n\n");
    int sayi,i,c,sum=0;
    
    printf("Bir deger giriniz: ");
    scanf("%d",&sayi);
    
    if (sayi>9){
        for (i=sayi; i>7; i--){
            for (c=2; c<10; c++){
                if (i%c==0)
                    break;
                if (c==9){
                    sum=sum+i;
                }
            }
        }
        sum=sum+17;
        printf("%d",sum);
    }
    if (sayi==7)
        printf("17");
    if (sayi==5)
        printf("10");
    if (sayi==3)
        printf("5");
    if (sayi==2)
        printf("2");
    return 0;
 
}
