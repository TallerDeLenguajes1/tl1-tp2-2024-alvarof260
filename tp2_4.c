#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct
{
    int velocidad;  // entre 1 y 3 GHz
    int anio;       // entre 2015 y 2023
    int cantidad;   // entre 1 y 8
    char *tipo_cpu; // valores del arreglo tipos
} typedef computadora;

void cargarPc(computadora pcs[], int n);
void mostrarPc(computadora pcs[], int n);
void mostrarPcMasVieja(computadora pcs[], int n);
void mostrarPcMasRapida(computadora pcs[], int n);

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

int main()
{
    srand(time(NULL));
    computadora pcs[5];
    cargarPc(pcs, 5);
    mostrarPc(pcs, 5);
    mostrarPcMasVieja(pcs,5);
    mostrarPcMasRapida(pcs,5);
    return 0;
}

void cargarPc(computadora pcs[], int n)
{
    for (int i = 0; i < n; i++)
    {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % 9;
        pcs[i].cantidad = 1 + rand() % 8;
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
}

void mostrarPc(computadora pcs[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", pcs[i].velocidad);
        printf("%d\n", pcs[i].anio);
        printf("%d\n", pcs[i].cantidad);
        printf("%s\n", pcs[i].tipo_cpu);
        printf("\n");
    }
}

void mostrarPcMasVieja(computadora pcs[], int n)
{
    computadora masVieja = pcs[0];
    for (int i = 0; i < n; i++)
    {
        if (masVieja.anio > pcs[i].anio)
            masVieja = pcs[i];
    }
    printf("pc mas vieja\n");
    printf("%d\n", masVieja.velocidad);
    printf("%d\n", masVieja.anio);
    printf("%d\n", masVieja.cantidad);
    printf("%s\n", masVieja.tipo_cpu);
    printf("\n");
}

void mostrarPcMasRapida(computadora pcs[], int n)
{
    computadora masRapida = pcs[0];
    for (int i = 0; i < n; i++)
    {
        if (masRapida.velocidad < pcs[i].velocidad)
            masRapida = pcs[i];
    }
    printf("pc mas rapida\n");
    printf("%d\n", masRapida.velocidad);
    printf("%d\n", masRapida.anio);
    printf("%d\n", masRapida.cantidad);
    printf("%s\n", masRapida.tipo_cpu);
    printf("\n");
}