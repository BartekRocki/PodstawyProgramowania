#include <stdio.h>
#include <stdlib.h>
void poteganieparzytych(int a){
if(a%2==1)a=a-2;
else a=a-1;
int i;
for(i=1;a<=a;i++){
if (i%2==1)printf("%d\n",i*i);
}
}
int main(int argc, char *argv[])
{
  int a;
  printf("podaj wartosc:\n");
  scanf("%d",&a);
  printf("%d",poteganieparzystch(a));
  system("PAUSE");	
  return 0;
}
