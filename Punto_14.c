#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char NombreE[20]; char NombreEA[20];
    int Empleado=1, Largo=0, Dia=0, Mes=0, Anio=0, DiaA=0, MesA=0, AnioA=0, I=0, N=0, Sueldo=0, SueldoA=0;
    
    printf("Ingrese el nombre del empleado:");
    gets(NombreEA);

    printf("Ingrese el dia de ingreso del empleado:\n");
    scanf("%d", &DiaA);
    printf("Ingrese el mes de ingreso del empleado: ");
    scanf("%d", &MesA);
    printf("Ingrese el dia de ingreso del empleado: ");
    scanf("%d", &AnioA);
    printf("Ingrese el sueldo del empleado ");
    scanf("%d", &SueldoA);

    for (Empleado; Empleado<=2; Empleado++)
    {
        printf("Ingrese el nombre del empleado\n");
        scanf("%s", &NombreE);

        printf("Ingrese el dia de ingreso del empleado:\n");
        scanf("%d", &Dia);
        printf("Ingrese el mes de ingreso del empleado: ");
        scanf("%d", &Mes);
        printf("Ingrese el dia de ingreso del empleado: ");
        scanf("%d", &Anio);
        printf("Ingrese el sueldo del empleado ");
        scanf("%d", &Sueldo);

        Largo=strlen(NombreE);
        N=Largo-1;

        if (Anio>AnioA)
        {
            //Nada//
        }
        else
        {
            if (Mes>MesA)
            {
                //Nada//
            }
            else
            {
                if (Dia>DiaA)
                {
                    //Nada//
                }
                else
                {
                    for (I=Largo-1; I>=0; I--)
                    {
                        NombreEA[N]=NombreE[I];
                        N--;
                    }
                    SueldoA=Sueldo;
                } 
            }  
        }
        system("cls");
    }
    printf("El empleado mas antiguo es %s y tiene un sueldo de %d$");
}