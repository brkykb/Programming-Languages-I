#include <stdio.h>

int main() {
    
    printf("**Her iki basamagida asal olan sayilari yazdiran program**\n\n");
    
    int sayi,i,s,b;

    for (sayi=21; sayi<100; sayi++){
        i=sayi%10;
        s=sayi/10;
        for (b=2; b<10; b++){
            if (i%b==0 || s%b==0){
                if (i==b || s==b){
                    continue;
                }
                else{
                    break;
                }
            }
            if (b==9 && i%4!=0 && s%4!=0){
                printf("%d\n",sayi);
            }
        }
        b=2;
    }
    return 0;
}
