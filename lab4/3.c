#include <stdio.h>

int main() {
    
    printf("**100'den 200'e kadar olan cift sayilari yazdiran program**\n\n");
 
    int sayi;
    
    for(sayi=100; sayi<200; sayi+=2){
        printf("%d\n",sayi);
    }
    return 0;
}
