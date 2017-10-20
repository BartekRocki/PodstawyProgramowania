#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int i ;
int a,b;
float dzielenie;

while (i!=0){printf("Masz do wyboru kilka obcji matematycznych:\n0.Wyjscie\n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4Dzielenie\n5.Reszta z dzielenia\n");
scanf("%d",&i);
      switch(i)
      {case 1:
            printf("podaj 2 wartosci do dodawania\n");
            scanf("%d %d",a,b);
            printf("\nwynik dodawania to :%d\n",(a+b));
            break;
            case 2:
            printf("podaj 2 wartosci do odejmowania");
            scanf("%d %d",a,b);
            printf("\nwynik odejmowania to :%d",(a-b));
            break;
            case 3:
            printf("podaj 2 wartosci do mnozenia");
            scanf("%d %d",a,b);
            printf("\nwynik mnorzenia to :%d",(a*b));
            break;
            case 4:
            printf("podaj 2 wartosci do dzielenia");
            scanf("%d %d",a,b);
            dzielenie=(1.0*a)/(1.0*b);
            printf("\nwynik dzielenia to :%d",dzielenie);
            break;
            case 5:
            printf("podaj 2 wartosci do dzielenia z reszta");
            scanf("%d %d",a,b);
            printf("\nwynik reszty z dzielenia to :%d",(a%b));
            break;
            default :
            printf("podales zla wartosc");
            break;}
      
      
      
      }
  printf( "wybrles 0 ");
  system("PAUSE");	
  return 0;
}
