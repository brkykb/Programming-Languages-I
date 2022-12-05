#include <stdio.h>
 
int main() {
 
    printf("**Girilen sayinin mukemmel sayi olup olamdigini soyleyen program**\n\n\n");
    
    int sayi,sum=0,i;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (i=sayi-1; i>0; i--){
        if  (sayi%i==0){
            sum=sum+i;
        }
    }
    if (sum==sayi)
        printf("Girilen sayi mukemmel sayidir\n");
    else
        printf("Girilen sayi mukemmel sayi degildir\n");
        
    return 0;
 
}
