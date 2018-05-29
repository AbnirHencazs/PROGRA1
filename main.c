#include <stdio.h>
#include <string.h>
int main()
{
    char    nombre[50];
    char    apellido[50];
    char    copia[50];
    char    string4;
    int     i, largo;
    printf("\nEscriba su nombre: ");
    scanf("%s", nombre);
    printf("Escriba su apellido: ");
	scanf("%s", apellido);
    strcat(nombre, " ");
    strcat(nombre, apellido);
    printf("\t\t%s",nombre);
    /*
    strcpy(copia, nombre);
    i = strcmp(copia, nombre);
    if(i==0)
    {
        printf("%s\t%s\nCopia Exitosa.",nombre, copia);
        }*/
	return 0;
}
