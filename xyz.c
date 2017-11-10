#include<stdio.h>
#include<math.h>
#include<stdbool.h>//biblioteka potrzebna do funkcji bool
#include<stdlib.h>//rand
#include<time.h>//srand(time(NULL))
#include<string.h>//teksty
//char napis[30]
/*gets(napis);//możliwość wejscia na inne partycje 
 fgets(napis,30,stdin);//pobiera do 30 znaków
 scanf("%s",&napis);//pobiera napis
 fputs(napis,stdout);/wypisuje dany napis
 printf(napis);//wyisuje dany napis 
 

/*int dec2bin(int a){
    int x=0;
    while (a>0){
        if (a%2==0){ x=x+1;}
        a=a/2;
    
    }
    return x;
}*///zad4
/*bool suma(int tab[],int rozmiar){
int i,suma=0;
for (i=0;i<rozmiar;i++){
    suma=suma+(tab[i]*tab[i]);}
    if (suma>30){return true;}
    else return false;
}*/

//zad 3
    /*int suma(int tab[],int rozmiar){
    int i,suma=0;
    for (i=0;i<rozmiar;i++){
        suma=suma+tab[i];}
    return suma;
}*/
//zad 6
/*void zad6 (int tab1[],int tab2[],int tab3[],int n){
    int i;
    int tab1[2*n],tab2[],tab3[];
    int i;
    for(i=0;i<n;i++){
        if (i%2==0)tab1[i]=tab2[i/2];}
    else tab1[i]=tab3[i/2];
    }*/
//zad 7
/*int max (int tab1[],int n){
    int max,i;
    for (i=0;i<n;i++){
        if (i==0)max=tab1[0];
        else if (tab1[i]>max)max=tab1[i];            }
    return max;
}*/
//zad8
/*bool szukaj(int tab[],int n,int szukana){
    int i;S
    for(i=0;i<10;i++){
        if (tab[i]==szukana)return true;}
    return false;
        
}*/
/*int dlugosctekstu(char napis[]){
 int i;
 for(i=0;napis[i];i++);
 return i-1;
}
bool podobnewyrazy(char tab1[],char tab2[]){
    int a=dlugosctekstu(tab1);
    int i,j=a-1;
    for(i=0;i<a;i++){
        if (tab1[i]!=tab2[j])return false;
        j--;
    }
return true;
}
*/
//napisz funkcje która poruwnuje 2 napisu czy sa takei same
/*bool takiesame(char tab[],char tab2[]){
    int i;
    for(i=0;i<strlen(tab);i++){
        if (tab[i]!=tab2[i])return false;}
    return true;
}*/
//napisz funkjce ktura przyjmuje napis i zmienia je w duze litery
//napisz funkcje ktura przyjmuje 2 napisy ruznych dlugosci
/*void funkcja(char napis1[],char napis2[]){
    int rozmiar=strlen(napis1)+strlen(napis2);
    char napis3[rozmiar];
    int i ;
    for (i=0;i<strlen(napis1);i++)
    {napis3[i]=napis1[i];}
    int j=0;
    for (;i<rozmiar;i++){napis3[i]=napis2[j];
        j++;
    }
    fputs(napis3,stdout);
}*///npiasz program ktury wczyta od uzytkownika ciag znakow i policzmy sume kwadratow litererk
//sprawdz czy dany tekst jest palidronem

int main()
{
    char a[30];
    fgets(a,30,stdin);
    int i,j;
    j=strlen(a);
    if ()
    /*int suma=0;
    for (i=0;i<strlen(napis1);i++){
        suma=suma+(napis1[i]*napis1[i]);}
    printf("%d",suma);
    */
    //funkcja(napis1,napis2);
    /*int i=0;
    printf("%s\n",napis);
    for (;i<strlen(napis);i++){
        if (napis[i]>=97 && napis[i]<=122)napis[i]=napis[i]-32;
    }
    printf("%s\n",napis);*/
    
    /*char napis[15];
     char napis2[15];
     fgets(napis,15,stdin);
     fgets(napis2,15,stdin);
    printf(podobnewyrazy(napis,napis2)?"tak":"nie");*/
   /* char tab[15];
    fgets(tab,15,stdin);
    printf("%d",dlugosctekstu(tab));*/
    // funkcja przyjmuje 2 napisy i sprawdza czy te napiy są takie same
    
    //napisz program któr wczyta tekst na  3 rużne sposoby
    /*char tab[15];
    gets (tab);
    puts(tab);
    fgets(tab,15,stdin);
    fputs(tab,stdout);
    scanf("%s",tab);
    printf("%s",tab);*/
    
    //zad8
    /*int tab[10];
    int i;
    int szukana;
    srand(time(NULL));
    while (i<10){
        szukana=rand()%10;
        printf("%d\n",szukana);
        if (!szukaj(tab,i,szukana)){tab[i]=szukana;
            i++;}
        else{ printf("ta wartosc jest juz podana \n");
            int j;
            for (j=0;j<i;j++){
                printf("%d",tab[j])
                printf()
            }
        }
    
    }*/
    
    
    //zad 7
    /*int tab1[5]={1,12,2,5,3};
    printf("%d\n",max(tab1,5));*/
    
    //zad6
    /*int n=4;
    int tab1[n*2];
    int tab2[]={1,2,3,4};
    int tab3[]={5,6,7,8};
    zad6(tab1,tab2,tab3,n);
    int i;
    for(i=0;i<2*n;i++){
    printf("%d\n",tab1[i])}*/
   
    //zad4
    /*int tab[5];
    int i=0;
    for(i=0;i<5;i++){
        scanf("%d",& tab[i]);
    }
    bool potega=suma(tab,5);
    if (potega==true)printf("liczba jest wieksza od 30 ");
    else printf("liczba jest mniejsza od 30 ");*/
    
    //zad 3
    /*int i;
    int tab[5];
    for(i=0;i<5;i++){
        scanf("%d",& tab[i]);
    }
    printf("suma to %d\n",suma(tab,5));*/
    
    /*int n;
    printf("podaj wartosc do przeksztalcenia na liczbe binarna \n");
    scanf("%d",&n);
    int tab[4],i=3;
    while (n>0){
        tab[i]=n%2;
        n=n/2;
        i=i-1;    }*/
   
    return 0;
    
}


