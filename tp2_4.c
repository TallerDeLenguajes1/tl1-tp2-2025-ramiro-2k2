#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANTIDAD 5

typedef struct {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
} compu;

void listarPCs(compu pc[], int cantidad);
void mostrarMasVieja(compu pc[], int cantidad);

int main(){

    srand(time(NULL));

    
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    
    
    compu pc[CANTIDAD];
for (int i = 0; i < CANTIDAD; i++)
{        
    
    pc[i].velocidad=(rand()%(3-1+1))+1; 
    pc[i].cantidad_nucleos=(rand()%(8-1+1))+1;
    pc[i].anio=(rand()%(2024-2015+1))+2015;
    
    int nprocesador = rand() % 6;
    pc[i].tipo_cpu=tipos[nprocesador];


    // printf("PC -[%d]-> la velocidad del procesador es %d Ghz.\n",i,pc[i].velocidad);
    // printf("Su fabricante  es -> %s <-\n",pc[i].tipo_cpu);
    // printf("Cantidad de nucleos -> %d <-\n",pc[i].cantidad_nucleos);
    // printf("Y su anio de Fabricacion es: %d\n",pc[i].anio);
    // printf("//------//------//------//------//\n");
    
}

listarPCs (pc,CANTIDAD);
mostrarMasVieja(pc,CANTIDAD);

    return 0;
}

void listarPCs(compu pc[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {

        printf("PC -[%d]-> la velocidad del procesador es %d GHz\n", i, pc[i].velocidad);
        printf("Su fabricante es -> %s <-\n", pc[i].tipo_cpu);
        printf("Cantidad de nucleos -> %d <-\n", pc[i].cantidad_nucleos);
        printf("Y su anio de fabricacion es: %d\n", pc[i].anio);
        printf("//------//------//------//------//\n");
    }
    
}


void mostrarMasVieja(compu pc[], int cantidad){

    int MasVieja = 0;

    for (int i = 1; i < cantidad; i++) {
        if (pc[i].anio < pc[MasVieja].anio) {
            MasVieja = i;
        }
    }
    printf("--->PC más vieja encontrada:<----\n");
    printf("*|Velocidad: %d GHz|\n", pc[MasVieja].velocidad);
    printf("*|Tipo De Procesador: %s|\n", pc[MasVieja].tipo_cpu);
    printf("*|Cantidad de nucleos: %d|\n", pc[MasVieja].cantidad_nucleos);
    printf("*|Anio de fabricacion: %d|\n", pc[MasVieja].anio);
}