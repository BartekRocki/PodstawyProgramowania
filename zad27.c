#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int i,x;
printf("Podaj liczbe\n");
scanf("%d",&x);
printf("dzielniki to:\n");
for(i=1;i!=x;i++)
                 {if (x%i==0){printf("%d\t",i);}
                 }
                 printf("%d",x);
                  
  
  system("PAUSE");	
  return 0;
}
