#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Cadena[20];
    int Largo=0, II=0, A=0, E=0, I=0, O=0, U=0;
    printf("Ingrese su cadena de texto ");
    gets(Cadena);

    Largo=strlen(Cadena);

    for (II=Largo-1; II>=0; II--)
    {
        switch (Cadena[II])
        {
        case 65:
        case 97:
            A+=1;
            break;
        
        case 69:
        case 101:
            E+=1;
            break;
        
        case 73:
        case 105:
            I+=1;
            break;

        case 79:
        case 111:
            O+=1;
            break;

        case 85:
        case 117:
            U+=1;
            break;

        default:
            break;
        }
    }
    printf("La vocal A se repite %d veces\n", A);
    printf("La vocal E se repite %d veces\n", E);
    printf("La vocal I se repite %d veces\n", I);
    printf("La vocal O se repite %d veces\n", O);
    printf("La vocal U se repite %d veces", U);
}