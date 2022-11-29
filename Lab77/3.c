
#include <stdio.h>

int main()
{
    float n,v,f,vs,fs,t,s;
    
    printf("Ogrenci numarasını giriniz: ");
    scanf("%f",&n);
    
    printf("Ogrenci vize notunu giriniz:");
    scanf("%f",&v);
    
    printf("Ogrenci final notunu giriniz: ");
    scanf("%f",&f);
    
    vs=40*(v/100);
    fs=60*(f/100);
    s=(vs+fs)/2;
    printf("Ogrenci numarası: %f",n);
    printf("\nOgrenci gecme notu: %f",s);

    return 0;
}
