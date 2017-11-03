#include <stdio.h>
#include <stdlib.h>
int zad7(int a){
    if (a<=0||a==10)return 0;
    else return 2*zad7(a-1)+zad7(a-2)+5;
}
int main(int argc, char *argv[])
{
    int a;
    printf("Podaj wartosc:\n");
    scanf("%d",&a);
    printf("%d\n",zad7(a));
  
  system("PAUSE");	
  return 0;
}
