#include<stdio.h>
#include<math.h>
/*float trojkat(float a, float b){
    float pole;
    pole=(a*b)/2.0;
    return pole;
}*/
/*void dzielniki(){
    int a,i=1;
    printf("Podaj liczbe\n");
    scanf("%d",&a);
    while(i<=a)
    {if (a%i==0){printf("%d\t",i);
        i++;}
    else i++;
    }*/
/*int suma (n){
    int suma=0 , i;
    for (i=1;i<=n;i++){
        if (i%2==1)suma=suma+i;
    }
    return suma;
}
void zad4(int a){
    int i;
    for(i=1;i<=a;i++){
        if (i%2==1)printf("%d\n",i*i);
    }

int fib(int a,int b){
    if(a==0)return 0;
    else if (a==1) return 1;
    else return fib(a-1)+fib(a-2);}*/
    
    /*int zad6(int a,int b){
        if(b==0)return 1;
        else return zad6(a,b-1)*a;
    }*/
/*int zad7(int a){
    if (a<=0||a==10)return 0;
    else return 2*zad7(a-1)+zad7(a-2)+5;

}*/
    
/*int zad8(int n){
    if (n==0)return 1;
    else return zad8(n-1)*n;
}*/

/*int zad9(int a){
    if (a==0) return 1;
    else if (a%2==0) return (a*a)-5;
    else return (a*a);
}*/
    
/*//POWTORZENIE
//zad1
int pierwiastek(float i){
    int i ;
    for (i=1;i*i=<a;i++){}
    return i-1;
}
//zad3
float wspulzednie(float a,float b,float c,int d){
    return sqrt(((a*c)*(a*c))+((b*d)*(b*d)));
}
//zad 4
int zad4(int a,int b){
    return (a+b)-(max (a,b));
}
//zad 19
int a(int n){
    int i,s=0;
    if (n<6) return n;
    else for(i=1;i=<3;i++){
        s=s+a(n-2*i);
    }
    return s;
    */
    
//zad 17
/*int zad17(int a){
    int b,c=0;
    do {
        b=a%10;
        a=a/10;
        if(b%3==0)b++;
    }
    while (a>0)
        return b;
    
    
}*/
//zad 14
/*int zad14 (float a,float b){
    int x,y;
    x=a;
    y=b;
    if (x-a==y=b)returt 1;
    else return 0;
}*/
//zad
    int main()
{
    
    //zad 18
    /*int i ;
    scanf("%d",n);
    int i;
    for (i=0;i<n;i++){
        int a ;
        scanf("%d",&a);
        printf("%d",a);
    }
    */
    
    /*float a,b;
    printf ("podaj podstawe \n");
    scanf("%f \n",&a);
    printf ("podaj wysokosc \n");
    scanf("%f \n",&b);
    printf("%f\n",trojkat(a,b));*/
   // printf("%d\n",suma(16));
    /*int a;
    printf("podaj wartosci \n");
    scanf("%d",&a);
    //zad4(a);
    //printf("%d",fib(a));
   // printf("%d",zad6(a,b));
    //printf("%d",zad7(a));
    //printf("%d"zad8(a));
    //printf("%d",zad9(a));*/
    return 0;
    
}


