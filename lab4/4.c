#include <stdio.h>

int main() {
    
    printf("**Girilen 10 adet sayidan pozitif ve negatif olanlari soyleyen program**\n\n");
    
    int sayi,s,p=0,n=0;
    for(s=1; s<11; s++){
        printf("%d. sayiyi giriniz: ",s);
        scanf("%d",&sayi);
        
        if (sayi>0){
            p++;
        }
        if (sayi<0){
            n++;
        }
    }
    printf("Girilen sayilarin %d tanesi pozitif\n",p);
    printf("Girilen sayilarin %d tanesi negatif\n",n);
    
    return 0;
}
