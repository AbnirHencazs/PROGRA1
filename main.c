#include <stdio.h>
#include <string.h>
int main()
{
    char    nombre[50];
    char    apellido[50];
    char    copia[50];
    char    resp;
    int     i, largo, lrgcrtr;
    printf("\nEscriba su nombre: ");
    scanf("%s", nombre);
    printf("Escriba su apellido: ");
    scanf("%s", apellido);
    strcat(nombre, " ");
    strcat(nombre, apellido);
    printf("\t\t%s",nombre);
	printf("Es correcta la informacion? (s/n): ");
	scanf("%c", resp);
	switch(resp)
	{
		case 'y':	
			break;
		case 'n':
			largo = strlng(nombre);
			printf("\nSu nombre tiene %d caracteres de longitud.\nCuantos caracteres desea modificar desea modificar?: ",lrgcrtr);
			scanf("%i", &lrgcrtr);
			printf("\n");
			for(i=0;i<lgrcrtr:i++)
			{
				printf("%i",i);
			}
			break;
		default:
			break;
	}
	
    /*
    strcpy(copia, nombre);
    i = strcmp(copia, nombre);
    if(i==0)
    {
        printf("%s\t%s\nCopia Exitosa.",nombre, copia);
        }*/
	return 0;
}
