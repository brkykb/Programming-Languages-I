#include <stdio.h>

void ascii(int i);
int fak(int sayi);
int ust(int alt, int ust);
int top(int sayi1, int sayi2);
int cik(int sayi1, int sayi2);
int carp(int sayi1, int sayi2);
float bolm(int sayi1, int sayi2);
void pascal(int sayi1);
void binary(int sayi);
void decimal(int sayi);

int main(){
    
    int a,sayi,b,c,sira,d;
    
    printf("**Coklu islem yapan program**\n\n");
    
    printf("ASCII Tablosu icin 1 \nFaktoriyel Hesabi icin 2 \nUslu sayi almak icin 3 \nDort islem yapmak icin 4 \nPascal ucgeni icin 5 \nBinary-Sayi cevirici icin 6 giriniz");
    scanf("%d",&a);
    switch (a){
        case (1):
            ascii(a);
            break;
        case (2):
            printf("Bir sayi giriniz: ");
            scanf("%d",&sayi);
            printf("%d",fak(sayi));
            break;
        case (3):
            printf("Taban ve ust degerini giriniz: ");
            scanf("%d %d",&c,&b);
            printf("%d",ust(c,b));
            break;
        case (4):
            printf("Yapmak istediginiz islemi seciniz ");
            printf("Toplama icin 1 \nCıkarma icin 2\n Carpma icin 3\n Bolme icin 4 giriniz");
            scanf("%d",&c);
            switch(c){
                case (1):
                    printf("Toplamak istediginiz iki sayiyi giriniz: ");
                    scanf("%d %d",&a,&b);
                    printf("%d",top(a,b));
                    break;
                case (2):
                    printf("Cikarmak istediginiz iki sayiyi giriniz: ");
                    scanf("%d %d",&a,&b);
                    printf("%d",cik(a,b));
                    break;
                case (3):
                    printf("Carpmak istediginiz iki sayiyi giriniz: ");
                    scanf("%d %d",&a,&b);
                    printf("%d",carp(a,b));
                    break;
                case (4):
                    printf("Bolmek istediginiz iki sayiyi giriniz: ");
                    scanf("%d %d",&a,&b);
                    printf("%f",bolm(a,b));
                    break;
                default:
                    printf("Lutfen gecerli bir sayi giriniz");
                    break;
            }
            break;
        case (5):
            printf("Sira sayisini giriniz: ");
            scanf("%d",&sira);
            pascal(sira);
            break;
        case (6):
            printf("Sayidan binary ye cevirmek icin  1 \nBinary den sayiya cevirmek icin 2 giriniz");
                   scanf("%d",&d);
            switch (d){
                case (1):
                    
                    printf("Sayiyi giriniz: ");
                    scanf("%d",&d);
                    binary(d);
                    break;
                    
                case (2):
                    printf("Sayiyi giriniz");
                    scanf("%d",&d);
                    decimal(d);
                    
                    break;
                default:
                    printf("Lutfen dogru girdiginizden emin olun");
                    break;
            }
            break;
        default:
            printf("Lutfen yeniden deneyiniz");
    }
}
void ascii(int i){
    
    for(i=32; i<=127; i++){
        printf("%d ",i);
        printf("%c   ",i);
    }
}
int fak(int sayi){
    int sonuc=1;
    for(; sayi>0; sayi--)
        sonuc*=sayi;
    
    return sonuc;
}

int ust(int alt, int ust){
    
    int i,sonuc=1;
    if(ust==0)
        sonuc=1;
    for(i=1; i<=ust; i++)
        sonuc*=alt;
    
    return sonuc;
}
int top(int sayi1, int sayi2){
    int sonuc;
    sonuc=sayi1+sayi2;
    return sonuc;
}
int cik(int sayi1, int sayi2){
    int sonuc;
    sonuc=sayi1-sayi2;
    return sonuc;
}
int carp(int sayi1, int sayi2){
    int sonuc;
    sonuc=sayi1*sayi2;
    return sonuc;
}
float bolm(int sayi1, int sayi2){
    float sonuc;
    sonuc=sayi1/sayi2;
    return sonuc;
}
void pascal(int sayi){
    
    int i,b,a,e,d,f1=1,f2=1,c=0;
    
    for(i=0; i<sayi; i++){
            b=i;
        printf("\n1");
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
        }
}
void binary(int sayi){
    
    int b[15],i=0;
    
    for(; sayi>0; sayi/=2){
            b[i]=sayi%2;
            i++;
    }
    i--;
    for(; i>=0; i--){
        printf("%d",b[i]);
    }
}
void decimal(int sayi){
    int deci[15],i=0,b,sonuc=0;
    
    for(; sayi>0; sayi/=10){
        deci[i]=sayi%10;
        i++;
    }
    i--;
    b=i;
    for(; i>=0; i--){
        
        sonuc=sonuc+(deci[i]*ust(2,b));
        b--;
    }
    printf("%d",sonuc);
}
