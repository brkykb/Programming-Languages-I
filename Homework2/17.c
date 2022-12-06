#include <stdio.h>

int main() {
 
    printf("**Girilen sayinin bir formulunu hesaplayan program**\n\n\n");
    
    int sayi;
    float sum=0,a,i;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (i=1; i<=sayi; i++){
        a=(1/i);
        printf("%f\n",a);
        sum=sum+a;
    }
    printf("Formulun sonucu: %f\n",sum);
    return 0;
}
