#include <stdio.h>
#include <stdlib.h>
void dzielniki(int a){
int i;
for(i=1;i<=a;i++){
if (a%i==0){printf("%d",i);}
}

int main(int argc, char *argv[])
{
  int a;
  printf("podaj wartosc :\n");
  scanf("%d",a);
  dzielniki(a);
  system("PAUSE");	
  return 0;
}
