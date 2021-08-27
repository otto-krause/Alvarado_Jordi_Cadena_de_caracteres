#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Cadena[20]; char CadenaI[20];
    int Largo=0, I=0, N=0;
    
    printf("Ingrese una cadena de texto: ");
    gets(Cadena);

    Largo=strlen(Cadena);

    for (I=Largo-1; I>=0; I--)
    {
        CadenaI[N]=Cadena[I];
        N++;
    }
    printf("\nLa cadena de texto invertida es: %s", CadenaI);
    return 0;
}