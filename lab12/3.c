#include <stdio.h>
int main(){

    char a[40];
    int i,d=0,s=0,v=0,c=0;
    
    printf("Bir kelime giriniz: ");
    fgets(a, 40, stdin);

    for(i=0; i<40; i++){
        if(a[i]>=97 && a[i]<=122){
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ){
                v++;
            }
            else{
                c++;
            }
        }
        if(a[i]>=48 && a[i]<=57){
            d++;
        }
        if(a[i]==' '){
            s++;
        }
    }
    printf("Vowels: %d\n",v);
    printf("Consonent: %d\n",c);
    printf("Digits: %d\n",d);
    printf("Space: %d",s);

    return 0;
}