
#include <stdio.h>

int main()
{
    int a,b,i;
    
    printf("***Carpim tablosunu yazdiran program***");
    
    printf("Carpim tablosunu yazdirmak istediginiz sayiyi giriniz: ");
    scanf("%d",&b);
    
    for (i=1; i<11; i++){
        a=b*i;
        printf("\n %d* %d = %d",b,i,a);
    }
 return 0;
}