
#include <stdio.h>
#include <math.h>

int main() {
    
    int a,b,c,e;
    float d,y,z;
    
    printf("***İkinci dereceden denklemin koklerini bulan program***\n\n\n");
    printf("ax^2+bx+c=0 denklemi icin a degerini girin: ");
    scanf("%d",&a);
    
    printf("b degerini giriniz: ");
    scanf("%d",&b);
    
    printf("c degerini giriniz: ");
    scanf("%d",&c);
    
    d=(b*b)-(4*a*c);
    y=((-b+sqrt(d))/2*a);
    z=((-b-sqrt(d))/2*a);
    
    if (d>0){
        printf("Birinci kok: %f ve ikinci kok %f",y,z);
    }
    if (d==0){
        printf("Birinci kok: %f ve ikinci kok %f",y,y);
    }
    if (d<0){
        printf("Bu denklemin reel koku yoktur");
    }
    return 0;
}
