#include <stdio.h>
#include <math.h>
 
int main() {
 
    printf("**Girilen sayinin armstrong sayi olup olmadigini soyleyen program**\n\n");
    
    int sayi,sum=0,a,c,g;
    double s=0,e;
    printf("Sayiyi giriniz: ");
    scanf("%d",&a);
    
    for (sayi=a; sayi>0; sayi=sayi/10){
        s++;
    }
    for (g=a; g>0; g=g/10){
        c=g%10;
        e=pow(c,s);
        sum=sum+e;
    }
    if(a==sum)
        printf("Girilen sayi armstrong\n");
    else
        printf("Girilen sayi armstrong degildir\n");
    
    
        
    
    
    
    return 0;
 
}
