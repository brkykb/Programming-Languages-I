#include <stdio.h>

int main() {
    
    printf("**500'den 100'e kadar olan sayilari yazdiran program**\n\n");
 
    int sayi;
    
    for(sayi=500; sayi>100; sayi--){
        printf("%d\n",sayi);
    }
    return 0;
}
