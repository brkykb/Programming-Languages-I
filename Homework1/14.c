
#include <stdio.h>

int main()
{
    int a,i,c=1;
    printf("**Bir sayinin fakrotriyelini yazdiran program**");
    
    printf("\n\nFaktoriyelini almak istediginiz sayiyi giriniz: ");
    scanf("%d",&a);
    
    for (i=a; i>0; i--){
        c=c*i;
     }
    printf("Girilen sayinin faktoriyeli: %d",c);
    
 return 0;
}

