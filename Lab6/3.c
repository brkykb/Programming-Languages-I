#include <stdio.h>

int main(){
    
    int sayi,a,sum=0;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    if(sayi>99 && sayi<1000){
        for(; sayi>0; sayi=sayi/10){
            a=sayi%10;
            sum=sum+a;
        }
        sum=sum/3;
        printf("Aritmetik ortalamasi: %d\n",sum);
    }
    else{
        printf("Lutfen 3 basamakli bir sayi giriniz\n");
    }
    
    return 0;
}
