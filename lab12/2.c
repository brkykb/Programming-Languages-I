
#include <stdio.h>

int main() {
    
    int b;
    char a[40];
    
    printf("kelime girin: ");
    scanf("%s",a);
    for (b=0; b<40; b++){
        if ((a[b]>='a' && a[b]<='z')||(a[b]>='A' && a[b]<='Z')){
         
            printf("%c",a[b]);
            }
            }
    
    return 0;
}
