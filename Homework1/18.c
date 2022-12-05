
#include <stdio.h>

int main()
{
    int a,i;
    printf("Binary formatına donusturmek istediginiz sayiyi giriniz: ");
    scanf("%d",&a);
    
    for (i=a; i>0; i=i/2){
        if (i%2==0)
            printf("0");
        else
            printf("1");
    
    }
   
    
 return 0;
}

