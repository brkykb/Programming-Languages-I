
#include<stdio.h>

int main()
{
    printf("**Faktoriyeli 10 basamakli olan ilk tam sayiyi yazdiran program**\n\n");
    int sayi=1,fakt=1;
    
    while (1){
        if (fakt>999999999){
            printf("%d\n",sayi--);
            break;
        }
        fakt=fakt*sayi;
        sayi++;
    }
  return 0;
}
