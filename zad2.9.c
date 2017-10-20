#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int a1,a2,b1,b2;
printf("podaj 1 przedzial\n");
scanf("%d %d  \n",&a1,&a2);
printf("podaj 2 przedzial\n");
scanf("%d %d \n",&b1,&b2);
  int gd,gg;
  if (a2<b1) printf("brak odpowiedzi\n");
  else if (a1>b2) printf("brak odpowiedzi\n");
  else if (a1<b1){printf("dzielniki to\n");
             if (a2<b2){gd=a1;
             gg=b2;}
             else {
                  gd=a1;
                  gg=a2;}      
                  
             }
       else if (a2<b2){gd=b1;
             gg=b2;}
             else {
                  gd=b1;
                  gg=a2;}   
                  int i;
  for (i=gd;gd<gg;i++){
      printf("%d\t",gd);
      }  
                  
              
  system("PAUSE");	
  return 0;
}
