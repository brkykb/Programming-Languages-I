
#include<stdio.h>

int main()
{
    printf("**Rakamlari birbirinden farklı ve uc basamaklı olan sayiları yazdiran program**\n\n");
    
    int i,sayi,k1,k2,k3;
    
    for (i=100; i<999; i++){
        k1=i%10;
        sayi=i/10;
        k2=sayi%10;
        sayi=sayi/10;
        k3=sayi%10;
        if (k1!=k2 && k2!=k3 && k1!=k3){
            printf("%d\n",i);
        }
    }
  return 0;
}
