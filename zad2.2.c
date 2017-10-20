#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int a,b,c;
    printf("rownanie kwadratowe to :A(x*x)+bx+c\n");
    printf("podaj wartosc A:\n");
    scanf("%d\n",&a);
    printf("podaj wartosc B:\n");
    scanf("%d\n",&b);
    printf("podaj wartosc C:\n");
    scanf("%d\n",&c);
    float delta;
    delta=(1.0*b*b)-(4.0*(a*b));
    float x,w1,w2;
    x=sqrt(delta);
    if (x>0){w1=((-1.0*b)+x)/(2*a);
             w2=((-1.0*b)-x)/(2*a);
             printf("miejsca zerowe to %d i %d\n",w1,w2);
             }else if(x==0){
                   w1=(-1.0*b)/(2*a);
                   printf("miejsce zerowe to %d \n",w1);}
                   else printf("brak miejsc zerowych delta ujemna ");
    
    
  system("PAUSE");	
  return 0;
}
