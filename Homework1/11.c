
#include <stdio.h>

int main()
{
    int a,i,c=1,sum=0;
    for (i=1; i<11; i++){
    
    printf("10 tane değeri giriniz");
    scanf("%d",&a);
    
    sum=sum+a;
    c=c*a;
    }
    printf("10 sayinin toplam degeri %d",sum);
    printf("\n10 sayinin carpim degeri %d",c);
    
 return 0;
}

