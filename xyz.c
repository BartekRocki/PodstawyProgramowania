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
 printf(napis);//wyisuje dany napis */
 int dlugosc(char*napis){
     int i;
     int ilosc=0;
     for (i=0;napis[i];i++){
         if(napis[i]==' '&& i>0 && napis[i-1]!=' '){
             ilosc++;}
     }
     if (napis[i-1]!=' '){ilosc++;}
     return ilosc;
 }
int slowa(char*napis){
    int i;
    for (i=0;napis[i];i++);
    
    
    return i;
}

/*int *tablica_dwuwymiarowa(int n,int m){
    int **arr=malloc(n*sizeof(int**));
    int i;
    for(i=0;i<n;i++){
        arr[i]=malloc(m*sizeof(int*));}
    arr[0][0]=6;
    return *arr;
}
int *tablica_jednowymiarowa(int n){
    int *arr=mallock(n*sizeof(int*));
    *arr=1;
    return arr;
    
}*/
/*int min(int **tab,int n,int m){
    int i,j;
    int min;
    min=tab[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(tab[i][j]<min){min=&tab[i][j];}
        }
    }
    return min;
}
int max(int **tab,int n,int m){
    int i,j;
    int min;
    max=tab[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(tab[i][j]>max){max=&tab[i][j];}
        }
    }
    return max;
}*/
int main()
{   /*srand(time(NULL));//#include<time.h>
    int **tab=malloc(4*sizeof(int**));
    int i,j;
    for (i=0;i<4;i++){
        *(tab+i)=malloc(4*sizeof(int*));
    }
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            *(*(tab+i)+j)=(rand()%10)+1;
        }
    }
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",*(*(tab+i)+j));
        }
        printf("\n");
    }*/
    /*int n;
    printf("podaj ilosc napisów:\n");
    char liczba[20];
    //fgets(liczba,20,stdin);
    //n=atoi(liczba);
    scanf("%d",&n);
    
    char **tab1=malloc(n*sizeof(char**));
    int i;
    for(i=0;i<n;i++){tab1[i]=malloc(20*sizeof(char*));
        printf("podaj napis:\n");
        fgets(tab1[i],20,stdin);
    }
    for (i=0;i<n;i++){
        fputs(tab1[i],stdout);
    }*/
    /*char napis[]="  tata lubi   x5  a";
    printf("%d\n",slowa(napis));*/
    /*int *wzk=tablica_dwuwymiarowa(4,4);
    printf("%d",wzk);
    int *wsk=tablica_jednowymiarowa(4);
    int i;
    for (i=0;i<4;i++){
        printf("%d",wzk[i]);
    }*/
    /*srand(time(NULL));
    int **tab=malloc(4*sizeof(int**));
    int i,j;
    for (i=0;i<4;i++){
        *tab[i]=malloc(4*sizeof(int*));
    }
    for (i=0;i<4;i++){
        for(j=0;j<0;j++){
            tab[i][j]=rand()%100;}}
    for (i=0;i<4;i++){
        for(j=0;j<0;j++){
            printf("%d",tab[i][j]);}}
    printf("minimalna wartosc to :%d\n",min(tab,4,4));
    printf("maxymalna wartosc to : %d\n",max(tab,4,4));*/
    
    
    
    return 0;
    
}


