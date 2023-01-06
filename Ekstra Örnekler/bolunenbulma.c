
#include<stdio.h>

int main()
{
    
    int sayi,i;
    
    printf("Klavyeden bir sayi giriniz:" );
    scanf("%d",&sayi);
    
    for (i=2; i<10; i++){
        if (sayi%i==0){
            printf("Girilen sayi %d ile tam bolunur\n",i);
        }
    }
  return 0;
}
