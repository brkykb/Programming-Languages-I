
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Sirayla 3 sayi giriniz: ");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>b){
        if (a>c){
            printf("En buyuk sayi: %d\n",a);
        }
        else{
            printf("En buyuk sayi: %d\n",c);
        }
    }
    else{
        if (b>c){
            printf("En buyuk sayi: %d\n",b);
        }
        else{
            printf("En buyuk sayi: %d\n",c);
        }
    }
    
    

  return 0;
}
