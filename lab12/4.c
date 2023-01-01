#include <stdio.h>
int main(){
    
    printf("**Girilen 10 kelimeyi alfabetik olarak siralayan program**\n\n");
    
    char a[10][15],enk[10][15];
    int i,b,c=0,d;
    
    for(i=0; i<10; i++){
        printf("Kelimeyi giriniz: ");
        scanf("%s",a[i]);
    }
    for(d=0; d<10; d++){
        
        enk[d][0]='z';
        for(i=0; i<10; i++){
            if(enk[d][0]>a[i][0]){
                for(b=0; b<15; b++){
                    enk[d][b]=a[i][b];
                    c=i;
                }
            }
        }
        printf("%s",enk[d]);
        printf("\n");
        
        for(b=0; b<15; b++){
            a[c][b]='|';
        }
    }
    return 0;
}
