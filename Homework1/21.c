
#include <stdio.h>

int main()
{
    int a,s,i;
    
    printf("İlk ve son basamagini ogrenmek istediginiz sayiyi giriniz: ");
    scanf("%d",&a);
    
    s=a%10;
    
    for (i=a; i>10; i=i/10){
    }
    printf("Sayini ilk basamagi: %d",i);
    printf("\nSayinin son basamagi: %d",s);
        
 return 0;
}