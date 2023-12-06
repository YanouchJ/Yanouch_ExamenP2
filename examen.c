#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float CpromedioAlumno(int notas[]);
float CpromedioGrupal(int notas[][3], int);
int CmayorPromedio(float promedio[]);
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int alumnos[23];
    int notas[23][3], mejorAlumno;
    float promedioAlumno[23], promedioGrupal[3];

    for (int i = 0; i < 23; i++)
    {
        printf("Alumno %d: \n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Progreso %d: \n", j + 1);
            notas[23][3]=rand() % 6;
        }
        printf("\n");
        promedioAlumno[i] = CpromedioAlumno(notas[i]);
    }
    
    for (int i = 0; i < 1; i++)
    {
        promedioAlumno[i] = CpromedioAlumno(notas);
        printf("Promedio individual por Semestre: %2.f\n", promedioAlumno[i]);
    }

    for (int j = 0; j < 3; j++)
    {
        promedioGrupal[j] = CpromedioGrupal(notas, j);
        printf("Promedio grupal Progreso %d: %2.f\n", j + 1, promedioGrupal[j]);
    }

    mejorAlumno = CmayorPromedio(promedioAlumno);
    printf("El mejor alumno es el numero %d con un promedio de: %.2f\n", mejorAlumno + 1, promedioAlumno[mejorAlumno]);

    return 0;
}

float CpromedioAlumno(int notas[])
{
    float suma = 0;

    for (int i = 0; i < 3; i++)
    {
        suma += notas[i];
    }

    return suma / 3;
}

float CpromedioGrupal(int notas[][3], int progreso)
{
    float suma = 0;

    for (int i = 0; i < 23; i++)
    {
        suma += notas[i][progreso];
    }

    return suma / 23;
}


int CmayorPromedio(float promedio[])
{
int mejorAlumno=0;

for (int i = 0; i < 23; i++)
{
    if (promedio[i] > promedio[mejorAlumno])
    {
        mejorAlumno= i;
    }
}
return mejorAlumno;
}
