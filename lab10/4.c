
#include<stdio.h>


int main()
{
    int sayi[10],a=0;
    
    while(a<10){
        printf("%d. diziyi giriniz: ",a);
        scanf("%d",&sayi[a]);
        a++;
    }
    a--;
    while(a>=0){
        printf("%d. dizi %d\n",a,sayi[a]);
        a--;
    }
    
  return 0;
}

