#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ApellidoA[20];
    int Largo=0, Alumno=1, Notas=1, Nota=0, SumaN=0, Promedio=0, SumaP=0, PromedioT=0;
    printf("Ingrese el nombre y luego las notas de cada alumno ");

    for (Alumno; Alumno<=3; Alumno++)
    {
        printf("\n\nAlumno %d: ", Alumno);
        scanf("%s",ApellidoA);

        if (ApellidoA[0]>=97 && ApellidoA[0]<=122)
        {
            ApellidoA[0]-=32;
        }

        for (Notas; Notas<=5; Notas++)
        {
            printf("Nota %d: ", Notas);
            scanf("%d", &Nota);

            SumaN=Nota+SumaN;
            Promedio=SumaN/5;
        }
        SumaP=Promedio+SumaP;
        PromedioT=SumaP/3;
        SumaN=0;
        Notas=1;

        printf("%s tiene un promedio de %d", ApellidoA, Promedio);
    }
    printf("\n\nEl promedio del curso es %d", PromedioT);
    return 0;
}