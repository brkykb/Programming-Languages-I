#include <stdio.h>

int main(){
    
    int sayi,a,b=0;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    if(sayi>0){
        for(; sayi>0; sayi=sayi/10){
            a=sayi%10;
            b=(b+a)*10;
        }
        b=b/10;
        printf("%d",b);
    }
    else{
        printf("Lutfen pozitif bir sayi giriniz");
    }
    
    return 0;
}
