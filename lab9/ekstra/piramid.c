
#include<stdio.h>
int main()
{
    int sayi,i,a,c,d,e;
    printf("Sira sayisini giriniz: ");
    scanf("%d",&sayi);
    
    e=sayi;
        for(i=1; i<=sayi; i++){
            for (a=1; a<=i; a++){
                printf("*");
            }
            for(c=(e-1); c>0; c--){
                printf(" ");
            }
            e--;
            for (d=1; d<a; d++){
                printf("*");
            }
            printf("\n");
        }
  return 0;
}
