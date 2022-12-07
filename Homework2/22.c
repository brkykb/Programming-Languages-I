#include <stdio.h>

int main() {
 
    printf("** 100 ile 200 arasinda 9 ile bolunebilen sayilari ve toplamini yazdiran program **\n\n\n");
    
    int a,sum=0;
    
    for (a=100; a<=200; a++){
        if (a%9==0){
            printf("%d\n",a);
            sum=sum+a;
        }
    }
    return 0;
}
