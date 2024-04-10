#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct 
{
    int velocidad; //entre 1 y 3 GHz
    int anio; //entre 2015 y 2023
    int cantidad; //entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
} typedef computadora;


int main()
{
    srand(time(NULL));
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    computadora pc;
    pc.velocidad = 1 + rand() % 3;
    pc.anio = 2015 + rand() % 9;
    pc.cantidad = 1 + rand() % 8;
    pc.tipo_cpu = tipos[1 + rand() % 6 ];
    printf("%d\n", pc.velocidad);
    printf("%d\n", pc.anio);
    printf("%d\n", pc.cantidad);
    printf("%s\n", pc.tipo_cpu);
    return 0;
}