
#include <stdio.h>

int main()
{
    int a,b=0,i;
    
    printf("Basamak sayisini ogrenmek istediginiz sayiyi giriniz: ");
    scanf("%d",&a);
    
    for (i=a; i>0; i=i/10){
        b++;
    }
    printf("Sayi %d basamakli",b);
 return 0;
}