
#include <stdio.h>

int main()
{
    int a;
    float i,sum=0;
    printf("Formul hesaplayan program");
    
    printf("Hesaplamak istediginiz sayiyi giriniz: (Girilen deger cift olmali) ");
    scanf("%d",&a);
    
    if (a%2==0)
        for (i=a; i>1; i-=2){
            sum=sum+(1/i);
        }
    else
        printf("Lutfen cift sayi giriniz.");
    printf("Sonuc: %f",sum);
   
    
 return 0;
}

