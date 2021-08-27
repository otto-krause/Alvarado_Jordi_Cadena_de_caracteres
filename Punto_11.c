#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Cadena[20];
    int Largo=0, I=0, N=0;
    
    printf("Ingrese una cadena de texto: ");
    gets(Cadena);

    Largo=strlen(Cadena);

    for (I=Largo-1; I>=0; I--)
    {        
        if (Cadena[I]>=65 && Cadena[I]<=90)
        {
            Cadena[I]+=32;
        }
        else
        {
            if (Cadena[I]>=97 && Cadena[I]<=122)
            {
                Cadena[I]-=32;
            }
            else
            {
            }
        }
    }
    puts(Cadena);
    return 0;
}