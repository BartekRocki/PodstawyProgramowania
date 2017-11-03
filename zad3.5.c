#include <stdio.h>
#include <stdlib.h>
int fib(int a){
    if(a==0)return 0;
    else if (a==1) return 1;
    else return fib(a-1)+fib(a-2);}
int main(int argc, char *argv[])
{
  int a;
  printf("podaj wartosc:\n");
  scanf("%d",&a);
  printf("%d",fib(a));
  system("PAUSE");	
  return 0;
}
