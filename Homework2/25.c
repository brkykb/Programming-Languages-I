
#include<stdio.h>
int main()
{
  int n;
  printf("Sira sayisini giriniz: ");
  scanf("%d",&n);
  for(int sira=1; sira<=n; sira++)
  {
    int a=1;
    for(int i=1; i<=sira; i++)
    {
      printf("%d ",a);
      a = a * (sira-i)/i;
    }
    printf("\n");
  }
  return 0;
}
