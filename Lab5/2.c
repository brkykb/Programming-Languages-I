#include <stdio.h>

int main() {
 
    int sayi,i,a,b=0,c=0,d=0;
    while (1){
        printf("Klavyeden bir deger giriniz: ");
        scanf("%d",&a);
        
        if (a==-1){
            printf("2'ye tam bolunenlerin sayisi: %d\n",b);
            printf("5'ye tam bolunenlerin sayisi: %d\n",d);
            printf("Hem 2'ye hemde 5 e tam bolunenlerin sayisi: %d\n",c);
            break;
        }
        if (a%2==0){
            b++;
            if (a%5==0){
                c++;
            }
        }
        if (a%5==0){
            d++;
        }
    }
    return 0;
}
