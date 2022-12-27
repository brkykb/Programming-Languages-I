#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int sayi,a,s;
    
    sayi=rand() % 101;
    
    for(s=1; s<=10; s++){
        printf("Klavyede bir sayi giriniz: ");
        scanf("%d",&a);
        
        if (s==10){
            printf("Uzgunum, 10 denemede sayiyi bulamadiniz\n");
            break;
        }
        if (a==sayi){
            printf("Tebrikler sayiyi %d denemede buldunuz \n",s);
            break;
        }
        if (a!=sayi){
            printf("%d denemede sayiyi bulamadiniz, lutfen tekrar deneyiniz\n ",s);
        }
    }
    return 0;
}
