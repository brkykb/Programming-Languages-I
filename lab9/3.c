#include <stdio.h>

int main() {
    
    printf("**1000'den 2000'e kadar olan cift sayilari yazdiran program**\n\n");
 
    int sayi;
    
    for(sayi=1000; sayi<2000; sayi+=2){
        printf("%d\n",sayi);
    }
    return 0;
}
