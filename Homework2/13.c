#include <stdio.h>

int main() {
 
    printf("**Girilen sayinin guclu sayi olup olmadigini yazdiran program**\n\n\n");
    
    int sayi,a,b,c,s=1,sum=0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (a=sayi; a>0; a=a/10){
        b=a%10;
        for (c=b; c>0; c--){
            s=s*c;
        }
        sum=sum+s;
        s=1;
    }
    if (sum==sayi)
        printf("Girilen sayi guclu sayidir\n");
    else
        printf("Girilen sayi guclu sayi degildir\n");
    
    return 0;
 
}
