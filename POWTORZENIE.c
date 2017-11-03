#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//zad1
int pierwiastek(float a){
    int i ;
    for (i=1;i*i<=a;i++){}
    return i-1;
}
//zad2
int zad2(int a,int b){
if(a==0)return b;
else if (b==0) return a;
     else return zad2(a-1,b)+zad2(a,b-1);
}

//zad3 (math.h)
float wspulzednie(float a,float b,float c,int d){
    return sqrt(((a*c)*(a*c))+((b*d)*(b*d)));
}
//zad 4
int zad4(int a,int b){
    return (a+b)-(max (a,b));
}
//zad 5
int zad5(int a,int b){
int i;
int potega=a;
for (i=2;i<=b;i++){
potega=potega*a;}
return potega;}
//zad6
int zad6(int a){
int i;
for (i=0;i!=a;i++){
if (a%2==0){if(a%3)return a;
}
}
///zad7
void zad7(int n,int m){
int i;
for (i=1;i<=n;i++){
if (n%i==0)printf("%d",i);
}
}
//zad8(math.h)
int zad8(int n){
return sqrl(3,n)/1;
}
//zad9
void zad9(int a,int b,int c){
int max;
if (a>b)a==max;
else b==max;
if (max<c)c=max;
if (max*max==(a*a)+(b*b)+(c*c)-(max*max))printf("t");
else printf("n");
}
//zad11
void zad11(int c,int proc,int Pk){
double cena=c,i;
for(i=1;cena<Pk;i++){
cena=cena*(1+((1.00*proc)/100.00));
}
printf("cena przekroczy Punkt Krytyczny po %d podwyzkach o %f",&i,&cena-Pk);
}

//zad12
float zad12(int a,int b){
if(a<0){if (b<0){return (((-1)*a)+((-1)*b))/2;}
else return (((-1)*a)+b)/2;}
else{if (b<0) return (a+(-1*b))/2;
	else return (a+b)/2;}}
}

//zad14
int zad14 (float a,float b){
    int x,y;
    x=a;
    y=b;
    if (x-a==y-b)return 1;
    else return 0;
}
//zad15
int pole(int x1,int y1,int x2,int y2){
if (x1>x2)
	{if(y1>y1){return (x1-x2)*(y1-y2);}
	else return(x1-x2)*(y2-y1);}
else if(y1>y2){return (x2-x1)*(y1-y2);}
else return (x2-x1)*(y2-y1);
}


//zad16(math.h)
int zad16(int x,int y){
return x/sqrl(2,(x*x)+(y*y));

}
//zad17
int zad17(int a){
    int b,c=0;
    do {
        b=a%10;
        a=a/10;
        if(b%3==0)b++;
    }
    while (a>0);
        return b; 
}

//zad19
int a(int n){
    int i,s=0;
    if (n<6) return n;
    else for(i=1;i<=3;i++){
        s=s+a(n-2*i);
    	return s;
	}
//zad20
int zad20(int x,int y){
if (x==y) return x;
else if(x>y) return 2*zad20(x/y,y);
	else return 2*zad20(x,y/x);
}
int main(int argc, char *argv[])
{
    //zad18(main)
/*int i,n ;
    scanf("%d",n);
    
    for (i=0;i<n;i++){
        int a ;
        scanf("%d",&a);
        printf("%d",a);
    }*/
    //zad13(main)

int suma=0,z=0,i,a;
for(i=1;z==1;i++){
scanf("%d",&a);
suma =suma+a;
if (suma>=100)printf("Przekroczyles 100 o %d",suma-100);}

  
  system("PAUSE");	
  return 0;
}
