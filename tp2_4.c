#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAXPC 5


typedef struct{
    int velocidad; 
    int anio; 
    int cantidad_nucleos; 
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
    }compu;



int main(){

    srand(time(NULL));
    int aux;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"}; //arreglo de cpu
    compu pcs[MAXPC];
    
    
        for (int i=0;i<MAXPC;i++){

            pcs[i].velocidad=rand()% 3 + 1; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
            pcs[i].anio=rand()% (2024-2016) + 2015;// Año de fabricación (valor entre 2015 y 2024)
            pcs[i].cantidad_nucleos=rand()% 8 + 1;// Cantidad de núcleos (valor entre 1 y 8)
            aux=rand()% 6 + 0; //variable auxiliar para la posicion del arreglo Tipos
            pcs[i].tipo_cpu=tipos[aux];          


        }



    return 0;
}