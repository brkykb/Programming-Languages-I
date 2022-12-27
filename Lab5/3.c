#include <stdio.h>

int main() {
 
    int sayi1, sayi2, s=0;
    float ort=0, sum=0;
    
    while (1){
        printf("Klavyeden iki deger giriniz: ");
        scanf("%d %d",&sayi1,&sayi2);
        s+=2;
        if (sayi1==sayi2){
            printf("Girilen sayilarin ortalamasi: %f",ort);
            break;
        }
        else{
            sum=sum+sayi1+sayi2;
            ort=sum/s;
        }
    }
    return 0;
}
