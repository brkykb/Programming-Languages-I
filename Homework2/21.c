#include <stdio.h>

int main() {
 
    printf("**Girilen sayinin bir formulunu hesaplayan program**\n\n\n");
    
    int sayi,i,c=0,sum=0;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (i=1; i<=sayi; i++){
        
        c=c*10;
        sum=sum+1+c;
        c++;
    }
    printf("%d",sum);
    
    return 0;
}
