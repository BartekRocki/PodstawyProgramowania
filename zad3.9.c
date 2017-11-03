#include <stdio.h>
#include <stdlib.h>
int zad9(int a){
    if (a==0) return 1;
    else if (a%2==0) return (a*a)-5;
    else return (a*a);
}
int main(int argc, char *argv[])
{
  int a;
  printf("podaj wartosc:\n");
  scanf("%d",&a);
  printf("%d",zad9(a));
  system("PAUSE");	
  return 0;
}
