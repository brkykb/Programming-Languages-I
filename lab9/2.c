
#include <stdio.h>

int main() {
    
    printf("**Faktoriyel hesaplayan program**\n\n");
    
    int sayi,i,sum=1;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (i=sayi; i>0; i--){
        sum=sum*i;
    }
    printf("Girilen sayinin faktoriyeli: %d\n",sum);
    
    return 0;
}
