
#include <stdio.h>

int main()
{
    int i,sum=0;
   for (i=1000; i<2001; i+=2){
        printf("\n %d",i);
        sum=sum+i;
   }
   printf("\nSayilarin toplami:  %d",sum);
    
 return 0;
}

