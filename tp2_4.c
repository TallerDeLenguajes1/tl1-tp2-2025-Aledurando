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

void listarPCs(compu pcs[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz(compu pcs[], int cantidad);
void mostrarPC(compu pcs[],int indice);

int main(){

    srand(time(NULL));
    int aux,cantidad=MAXPC;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"}; //arreglo de cpu
    compu pcs[MAXPC];
    
    
        for (int i=0;i<MAXPC;i++){

            pcs[i].velocidad=rand()% 3 + 1; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
            pcs[i].anio=rand()% (2024-2016) + 2015;// Año de fabricación (valor entre 2015 y 2024)
            pcs[i].cantidad_nucleos=rand()% 8 + 1;// Cantidad de núcleos (valor entre 1 y 8)
            aux=rand()% 6 + 0; //variable auxiliar para la posicion del arreglo Tipos
            pcs[i].tipo_cpu=tipos[aux];          


        }

        listarPCs(pcs,cantidad);
        mostrarMasVieja(pcs,cantidad);
        mostrarMasVeloz(pcs,cantidad);



    return 0;
}

void listarPCs(compu pcs[], int cantidad){
    printf("----------ARREGLO DE PCS---------\n");
    for (int i=0;i<cantidad;i++){
        printf("PC = %d \n",i+1);
        mostrarPC(pcs,i);
    }

}

void mostrarMasVieja(compu pcs[], int cantidad)
{
    int menor=2100,auxMenor;

    for(int i=0;i<cantidad;i++){

        if(pcs[i].anio<menor){
            menor=pcs[i].anio;
            auxMenor=i;


        }

    }

    
    printf("///////// LA PC DE MAS VIEJA ES: PC %d //////////\n",auxMenor+1);
    mostrarPC(pcs,auxMenor);


}

void mostrarMasVeloz(compu pcs[], int cantidad){

    int mayor=0,auxI;

    for (int i=0;i<cantidad;i++){
        if(pcs[i].velocidad>mayor){
            mayor=pcs[i].velocidad;
            auxI=i;
        }
    }

    printf("/////////LA PC MAS VELOZ ES: PC %d ////////////\n",auxI+1);
    mostrarPC(pcs,auxI);

}


void mostrarPC(compu pcs[],int indice){

    printf("\tAnio de fabricacion: %d \n",pcs[indice].anio);
    printf("\tTipo de Procesador: ");
    puts(pcs[indice].tipo_cpu);
    printf("\tVelocidad: %d Ghz \n",pcs[indice].velocidad);
    printf("\tCantidad de nucleos: %d \n\n",pcs[indice].cantidad_nucleos);
    
}