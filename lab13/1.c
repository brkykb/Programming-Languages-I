#include <stdio.h>

int alan(int x);
int main(){
    
    int kenar;
    printf("Kenar uzunluklarini girin: ");
    scanf("%d",&kenar);
    printf("Sonuc=%d",alan(kenar));
}
int alan(int x){
    
    int a;
    a=x*x;
    
    return a;
}
