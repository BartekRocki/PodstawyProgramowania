#include <stdio.h>
#include <stdlib.h>
int PotegaDoNTEJ(int a,int b){
        if(b==0)return 1;
        else return zad6(a,b-1)*a;
    }
int main(int argc, char *argv[])
{
   int a,b;
  printf("podaj wartosci:\n");
  scanf("%d %d",&a,&b);
  printf("%d",PotegaDoNTEJ(a,b));
  system("PAUSE");	
  return 0;
}
