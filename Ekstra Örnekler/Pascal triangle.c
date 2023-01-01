#include <stdio.h>

int main(){

    int sayi,i,b,a,e,d,f1=1,f2=1,c=0,f;
    
    printf("**Pascal ucgenini yazdiran program**\n\n");
    
    printf("Sira sayisini giriniz: ");
    scanf("%d",&sayi);
    printf("1");
    printf("\n1");
    sayi=sayi-1;
    
    for(i=1; i<=sayi; i++){
        b=i;
        for(a=1; a<=i; a++){
            for(d=a; d>0; d--){
                f1=f1*d;
            }
            for(e=b; e>0; e--){
                c++;
                f2=f2*e;
                if(c==a){
                        printf("%d",f2/f1);
                    break;
                }
            }
            c=0;
            f1=1;
            f2=1;
        }
        printf("\n1");
    }
    return 0;
}
