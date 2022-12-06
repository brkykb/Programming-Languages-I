#include <stdio.h>

int main() {
 
    printf("**Girilen sayinin Floyd Ucgenini yazdiran**\n\n\n");
    
    int sayi,n,d;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (n=1; n<=sayi; n++){
        if (n%2!=0){
            for (d=n; d>0; d--){
                if (d%2==0){
                    printf("0");
                }
                else{
                    printf("1");
                    }
            }
            printf("\n");
        }
        else {
            for (d=n; d>0; d--){
                if (d%2==0){
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
