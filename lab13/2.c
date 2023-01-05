#include <stdio.h>

int ort(int a, int b, int c, int d, int e);
int main(){
    
    int a,b,c,d,e;
    printf("5 sayi giriniz: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    printf("Ortalama: %d",a,b,c,d,e);
}
int ort(int a, int b, int c, int d, int e){
    
    int ortalama;
    
    ortalama=(a+b+c+d+e)/5;
    
    return ortalama;
}
