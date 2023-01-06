#include <stdio.h>

int main(){
    
    printf("**ASCII tablosu cevirici**\n\n");
    
    int a,i,s=0;
    char b[1];
    
    printf("Sayidan Harfe cevirmek icin 1 \nHarfden sonra sayiya cevirmek icin 2 \nASCII Tablosu icin 3 giriniz");
    scanf("%d",&a);
    switch (a){
        case (1):
            while (1){
                scanf("%d",&i);
                printf("%c\n",i);
            }
        case (2):
            while (1){
                scanf("%s",b);
                printf("%d\n",b[0]);
            }
        case (3):
            for(i=32; i<=127; i++){
                printf("%d ",i);
                printf("%c  ",i);
                s++;
                if(s==10){
                    printf("\n");
                    s=0;
                }
            }
            break;
        
        default:
            printf("Lutfen seceneklerden birini giriniz");
    }
    return 0;
}
