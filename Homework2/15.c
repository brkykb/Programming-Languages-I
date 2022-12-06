#include <stdio.h>

int main() {
 
    printf("**Girilen sayini palindrom sayi olup olmadigini yazdiran program**\n\n\n");
    
    int sayi,i,b=0;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (i=sayi; i>0; i=i/10){
        b=(b+(i%10))*10;
    }
    b=b/10;
    if (sayi==b)
        printf("Girilen sayi palindrom sayidir\n");
    else
        printf("Girilen sayi palindrom sayi degildir\n");

    return 0;
}
