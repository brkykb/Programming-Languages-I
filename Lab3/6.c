#include <stdio.h>
#include <math.h>

int main() {
    
    int a,b;
    printf("İki deger giriniz: ");
    scanf("%d %d",&a,&b);
    
    if (a>50 && b>50)
        printf("%d",a+b);
    
    return 0;
}
