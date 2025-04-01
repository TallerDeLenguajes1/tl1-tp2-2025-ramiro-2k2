#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 5
#define M 7

int main(){ 

    srand(time(NULL));
    int i,j;
    int mt[N][M];
    int *p1;
    
    p1=&mt[0][0];
    

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
          *((p1 + i * M +j))=1+rand()%100;
            
        }
        
    }

    //mostrar la matriz
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
          printf("%d ",mt[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}
