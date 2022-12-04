#include <stdio.h>
#include <math.h>

int main() {
    
    printf("***Kenar uzunlukları bilinen dortgenin kare olup olmadigin bulan program***\n\n\n");
    
    int a,b,c,d;
    printf("Kenar uzunluklarini giriniz: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    if (a==b && b==c)
        printf("Bu dortgen karedir");
    else
        printf("Bu dortgen degildir");
    
    return 0;
}
