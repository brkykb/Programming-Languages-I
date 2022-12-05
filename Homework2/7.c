#include <stdio.h>
 
int main() {
 
    printf("Asal Sayi Bulan Program\n\n");
    int sayi,i,c;
    
    printf("Bir deger giriniz: ");
    scanf("%d",&sayi);
    
    if (sayi>9){
        for (i=sayi; i>7; i--){
            for (c=2; c<10; c++){
                if (i%c==0)
                    break;
                if (c==9){
                    printf("%d\n",i);
                }
            }
        }
        printf(" 7\n 5\n 3\n 2\n");
    }
    if (sayi==7)
        printf(" 7\n 5\n 3\n 2\n");
    if (sayi==5)
        printf(" 5\n 3\n 2\n");
    if (sayi==3)
        printf(" 3\n 2\n");
    if (sayi==2)
        printf(" 2\n");
    return 0;
 
}
