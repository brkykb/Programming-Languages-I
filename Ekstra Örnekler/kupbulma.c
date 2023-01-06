
#include<stdio.h>

int main()
{
    int sayi;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    sayi=sayi*sayi*sayi;
    
    printf("Girilen sayinin kupu: %d\n",sayi);

  return 0;
}
