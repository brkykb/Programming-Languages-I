#include <stdio.h>

char cumle(char a[200]);
int main(){
    
    int a;
    char k[200];
    printf("Bir cumle giriniz: ");
    fgets(k, 200, stdin);
    
    a=cumle(k);
    printf("Kelime sayisi: %d",a);
}
char cumle(char a[200]){
    
    int i,kelime=0;
    
    for(i=0; a[i]!='\0'; i++){
        
        
        if((a[i-1]>=97 && a[i-1]<=122)||(a[i-1]>=65 && a[i-1]<=90))
        if((a[i]<97 && a[i]>90) || (a[i]>122) || (a[i]<65)){
            kelime++;
        }
    }
    if(a[i-1]<97 && a[i-1]>122)
        kelime--;
        
    return kelime;
}
