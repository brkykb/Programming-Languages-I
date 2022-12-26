#include <stdio.h>

int main(){
 
    printf("**İki dizeyi degistiren program***\n\n");
    
    int A[100],B[100],i,sayi;
    
    printf("Dizi degerini giriniz: ");
    scanf("%d",&sayi);
     
    for (i=0; i<sayi; i++){
        printf("A dizesi için %d. degeri giriniz: ",i);
        scanf("%d",&A[i]);
    }
    for (i=0; i<sayi; i++){
        printf("B dizesi için %d. degeri giriniz: ",i);
        scanf("%d",&B[i]);
    }
    for (i=0; i<sayi; i++){
        A[i]=A[i]+B[i];
        B[i]=A[i]-B[i];
        A[i]=A[i]-B[i];
    }
    for (i=0; i<sayi; i++){
        printf("A dizisinin %d. degeri: %d\n",i,A[i]);
    }
    for (i=0; i<sayi; i++){
        printf("B dizisinin %d. degeri: %d\n",i,B[i]);
    }
        return 0;
}
