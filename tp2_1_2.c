// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20


int main(){
    
srand(time(NULL)); //para randomizar los numeros del vector.

int i;
double vt[N];
double *pvt;
pvt=vt;
    

    for(i = 0;i<N; i++)
        {
            *(pvt+i)=1+rand()%100;
            //vt[i]=1+rand()%100;

            printf(" %f ",*(pvt+i));
        }


    return 0;

}
