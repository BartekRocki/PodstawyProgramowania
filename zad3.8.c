#include <stdio.h>
#include <stdlib.h>
int zad8(int n){
    if (n==0)return 1;
    else return zad8(n-1)*n;
}
int main(int argc, char *argv[])
{  int a;
    printf("Podaj wartosc:\n");
    scanf("%d",&a);
    printf("%d\n",zad8(a));
  
  system("PAUSE");	
  return 0;
}
