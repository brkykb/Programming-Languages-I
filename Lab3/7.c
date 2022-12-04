#include <stdio.h>
#include <math.h>

int main() {
    
    printf("**Herhangi bir anda ucagin hizini veren algoritma**\n\n\n");
    int t,v;
    
    printf("Ucagin hizini ogrenmek istediginiz saniyeyi giriniz: ");
    scanf("%d",&t);
    
    if (t<=15){
        v=t*35;
        printf("%d km/s",v);
    }
    if (t>15 && t<=35){
        printf("480 km/s");
    }
    if (t>35 && t<=50){
        v=480-(t*35);
        printf("%d km/s",v);
    }
    return 0;
}
