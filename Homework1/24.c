
#include <stdio.h>

int main() {
    
    int a,b,i,c=0,d=0,e=0,f=0,h=0,j=0,k=0,l=0,p=0,v=0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);
    
    for (i=a; i>0; i=i/10){
        b=i%10;
        if (b==0)
            c++;
            if (b==1)
                d++;
                if (b==2)
                    e++;
                    if (b==3)
                        f++;
                        if (b==4)
                            h++;
                            if (b==5)
                                j++;
                                if (b==6)
                                    k++;
                                    if (b==7)
                                        l++;
                                        if (b==8)
                                            p++;
                                            if (b==9)
                                            v++;
    }
    printf("Bu sayida %d tane 0 var",c);
    printf("\nBu sayida %d tane 1 var",d);
    printf("\nBu sayida %d tane 2 var",e);
    printf("\nBu sayida %d tane 3 var",f);
    printf("\nBu sayida %d tane 4 var",h);
    printf("\nBu sayida %d tane 5 var",j);
    printf("\nBu sayida %d tane 6 var",k);
    printf("\nBu sayida %d tane 7 var",l);
    printf("\nBu sayida %d tane 8 var",p);
    printf("\nBu sayida %d tane 9 var\n",v);
    
        
    
    
    
    
    return 0;
}
