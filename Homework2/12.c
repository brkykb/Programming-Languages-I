#include <stdio.h>
 
int main() {
 
    printf("**Girilen sayidan 1 e kadar olan mukemmel sayilari yazdiran program**\n\n\n");
    
    int sayi,sum=0,i,a;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (a=sayi; a>0; a--){
        for (i=a-1; i>0; i--){
            if  (a%i==0){
                sum=sum+i;
            }
        }
        if (sum==a){
            printf("%d\n",a);
        }
        sum=0;
    }
    return 0;
 
}
