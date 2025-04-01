#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20


int main(){

    srand(time(NULL));


int i;
double *puntero;
double vt[N];

puntero = &vt[0];

for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;

printf("%f\n",*puntero);
puntero++;
}



    return 0;
}