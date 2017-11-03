#include <stdio.h>
#include <stdlib.h>
float pole(int a,int b){
return (a*b)/2.0;}
int main(int argc, char *argv[])
{
  int a,b;
  printf ("podaj 2 wartosci:\n");
  scanf("%d %d",&a,&b);
  printf("\n%f,",pole(a,b));
  system("PAUSE");	
  return 0;
}
