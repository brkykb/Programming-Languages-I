
#include <stdio.h>

int main()
{
    int a;
    printf("Hava sicakligini giriniz");
    scanf("%d",&a);
    
    if (a>0)
     printf("Sicaklik donma noktasinin uzerinde");
     if (a<0)
      printf("Sicaklik donma noktasinin altinda");

    return 0;
}
