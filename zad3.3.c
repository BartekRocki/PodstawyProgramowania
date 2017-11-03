#include <stdio.h>
#include <stdlib.h>
int sumanieparzystych(int a){
if (a<=0)return 0;
else if (a%2==1)return a+sumanieprzystych(a-2);
	else returne (a-1)+sumanieparzystych(a-3);
}
int main(int argc, char *argv[])
{
  int a;
  printf("podaj wartosc:\n");
  scanf("%d",&a);
  printf("%d",sumanieparzystych(a));
  system("PAUSE");	
  return 0;
}
