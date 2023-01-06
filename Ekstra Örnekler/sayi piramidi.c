#include <stdio.h>

int main()
{
    int sayi,i,a=0,b;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (i=1; i<=sayi; i++){
        a++;
        b=a;
        for (; b>0; b--){
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
