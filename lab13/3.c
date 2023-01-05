#include <stdio.h>

void ort(int a);
int main(){
    
    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);
    ort(a);
    
    return 0;
}
void ort(int a){
    
    if(a%2==0){
        printf("Sayi cift");
    }
    else{
        printf("Sayi negatif");
    }
}
