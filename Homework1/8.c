
#include <stdio.h>

int main()
{
    int k,b,a,sum=0;
    printf("Küçük olan sayiyi giriniz: ");
    scanf("%d",&k);
    
    printf("Büyük olan sayiyi giriniz: ");
    scanf("%d",&b);
    
    for (k;k<=b;k++){
     sum=sum+k;
    }
    printf("%d",sum);
    
 return 0;
}

