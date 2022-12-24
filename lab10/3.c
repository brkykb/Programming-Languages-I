
#include<stdio.h>


int main()
{
    int sayi,a[5],i=0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    while (sayi>0){
        a[i]=sayi%10;
        i++;
        sayi=sayi/10;
    }
    i--;
    for (; i>=0; i--){
        printf("%d\n",a[i]);
    }

  return 0;
}
