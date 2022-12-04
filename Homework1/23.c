
#include <stdio.h>

int main()
{
    int a,b=0,i;
    
    printf("Palindrom olup olmadigini ogrenmek istediginiz sayiyi giriniz: ");
    scanf("%d",&a);
    
    for (i=a; i>0; i=i/10){
        if (i>10)
            b=10*(b+(i%10));
        else
            b=b+i;
    }
    if (b==a)
        printf("Girilen sayi palindrom sayidir\n");
    else
        printf("Girilen sayi palindrom sayi degildir\n");
        
 return 0;
}
