
#include <stdio.h>

int main()
{
    int k,b,a,c;
    printf("Küçük olan sayiyi giriniz: ");
    scanf("%d",&k);
    
    printf("Büyük olan sayiyi giriniz: ");
    scanf("%d",&b);
    
    printf("Bölünebilecek sayiyi giriniz: ");
    scanf("%d",&c);
    
    for (k;k<=b;k++){
        if (k%c==0)
            printf("\n %d",k);
    }
    
 return 0;
}

