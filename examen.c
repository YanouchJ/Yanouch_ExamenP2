#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int alumnos[23];
float promedioAlumno(int notas[]);
float promedioGrupal(int notas[][3]);
float mayorPromedio (int promedio[]);


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    
    for (int i = 0; i < 23; i++)
    {
        alumnos[23]= rand() % 21;
    }
    

    for (int i = 0; i < 23; i++)
    {
        printf("%d\n", alumnos[23]);
    }

    return 0;
}
