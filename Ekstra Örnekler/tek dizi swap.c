#include <stdio.h>

int main(){
 
    int A[100],sayi,i,a;
    
    printf("Dizi degeri giriniz: ");
    scanf("%d",&a);
    
    for (i=0; i<a; i++){
        printf("%d. degeri giriniz: ",i);
        scanf("%d",&A[i]);
    }
    sayi=a;
    i=0;
    sayi--;
    while (1){
        A[i]=A[i]+A[sayi];
        A[sayi]=A[i]-A[sayi];
        A[i]=A[i]-A[sayi];
        i++;
        sayi--;
        if(i==sayi){
            for(i=0; i<a; i++){
                printf("%d. Dizi degeri: %d\n",i,A[i]);
            }
            break;
        }
    }
        return 0;
}
