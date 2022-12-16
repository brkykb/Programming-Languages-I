
#include <stdio.h>

int main() {
    
    printf("**Girilen sayinin karabuk sayisi olup olmadigini yazdiran program**\n\n");
    
    int sayi,i,a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    a=sayi%10;
    for (i=sayi; i>0; i=i/10){
        if (a!=i%10){
            printf("Girilen sayi karabuk sayisi degildir\n");
            break;
        }
    }
    if (i<=0){
        printf("Girilen sayi karabuk sayisidir\n");
    }
    return 0;
}
