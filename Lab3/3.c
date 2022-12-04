#include <stdio.h>
#include <math.h>

int main() {
    
    printf("***Girilen yilin artik yil olup olmadigini hesaplayan program***\n\n\n");
    
    int a;
    
    printf("Yili girin: ");
    scanf("%d",&a);
    
    if (a%4==0) {
        printf("Girilen yil artik yil");
    }
    else
        printf("Girilen yil artik yil degildir\n");
    
    return 0;
}
