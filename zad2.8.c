#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int a,b;
printf("podaj wartosci :\n");
scanf("%d %d",a,b);
if (a>0){
         if (b==0)printf("przchodzi przez I i III cwiartke");
         else if (b>0)
         {printf("przchodzi przez I , II i III cwiartke");}
              else printf("przchodzi przez I , III i VI cwiartke");}
if (a<0){
         if (b==0)printf("przchodzi przez II i IV cwiartke");
         else if (b>0){printf("przchodzi przez I , II i IV cwiartke");}
              else printf("przchodzi przez II , III i VI cwiartke");
         }
if (a==0){if (b==0)printf("nie przechodzi przez cwiartki");
             else if (b>0)printf("przechodzi przez I i II cwiartke");
                  else printf("przechodzi przez III i IV cwiartke");
                  }
          
  system("PAUSE");	
  return 0;
}
