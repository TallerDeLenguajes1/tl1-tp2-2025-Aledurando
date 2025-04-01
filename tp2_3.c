#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7


int main(){
int i,j,*punteromt;
int mt[N][M];
punteromt=&mt[0][0];

srand(time(NULL));

    for(i=0;i<N; i++)
    {
        
        for(j=0;j<M;j++)
            {
                *(punteromt+(i*M+j))=1+rand()%100;
               
                printf(" %d ", *(punteromt+(i*M+j)));
            }
        
            printf("\n");
    }

    return 0;
}