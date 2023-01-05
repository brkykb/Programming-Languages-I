#include <stdio.h>
#include <math.h>

int arm(int a);
int asal(int sayi);
int main(){
    
    int b,result,asalresult;
    printf("Sayiyi giriniz: ");
    scanf("%d",&b);
    result=arm(b);
    asalresult=asal(b);
    
    if(result==1)
        printf("Armstrong sayidir\n");
    if(result==0)
        printf("Armstorng sayi degildir\n");
    if(asalresult==1)
        printf("Asal sayi degildir");
    if(asalresult==0)
        printf("Asal sayidir");
}
int arm(int a) {
 
    int sayi,sum=0,c=0,g;
    double s=0,e;
    
    for (sayi=a; sayi>0; sayi=sayi/10){
        s++;
    }
    for (g=a; g>0; g=g/10){
        c=g%10;
        e=pow(c,s);
        sum=sum+e;
        
        if(sum==a){
            c=1;
        }
        else{
            c=0;
        }
    }
    return c;
}
int asal(int sayi){
    
    int i,d=0;
    
    for(i=2; i<sayi; i++){
        if(sayi%i==0){
            d=1;
            break;
        }
    }
    if(sayi==i)
        d=0;
    
    return d;
}
