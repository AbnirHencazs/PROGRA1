#include <stdio.h>
#include <string.h>
int main()
{
    char    nombre[50];
    char    apellido[50];
    char    copia[50];
    char    resp;
    char    crrcn_car;
    int     i, j, largo, lrgcrtr;
    int     arrgl[50];
    //                                  OBTENCION DE CADENA.
    printf("\nEscriba su nombre: ");
    scanf("%s", nombre);
    printf("Escriba su apellido: ");
    scanf("%s", apellido);
    strcat(nombre, " ");//CONCATENACION DE CADENA
    strcat(nombre, apellido);
    //                                  SE CICLA PARA PODER MODIFICAR LA CADENA SI SE COMETIO ALGUN ERROR AL INGRESARLA.
    printf("\n\t\t%s",nombre);
do 
{
	printf("\tEs correcta la informacion? (s/n): ");
	scanf("%s", &resp);//'n' ENTRA A CORRECION DE CADENA; 's' SALE DEL CICLO.
	switch(resp)
	{
		case 'n':
        //SE IMPRIME LOS CARACTERES DE LA CADENA 'nombre' CON SU RESPECTIVO INDICE DEBAJO. DOBLE ESPACIO PARA DOBLE DIGITOS(10,11,ETC).
			largo = strlen(nombre);//LARGO DE CADENA
            printf("\n");
            for(i=0;i<largo;i++) 
            {
                if(i<9)
                {
                    printf("%c ",nombre[i]);
                    }
                    else{
                        printf("%c  ",nombre[i]);
                        }
                }
            printf("\n");
			for(i=0;i<largo;i++)
			{
				printf("%i ",i);
                }
            //SE OBTIENE LA CANTIDAD DE CARACTERES A CAMBIAR, LOS INDICES DE DICHOS CARACTERES Y LOS CARACTERES REEMPLAZANTES.
			printf("\nSu nombre tiene %d caracteres de longitud.\n\nCuantos caracteres desea modificar desea modificar?: ",largo,lrgcrtr);
			scanf("%i", &lrgcrtr);
            for(i=0;i<lrgcrtr;i++)
            {
                printf("\nIndique el indice del caracter a ser cambiado: ");
                scanf("%d",&arrgl[i]);
                
                for(j=0;j<largo;j++)
                {
                        if(j==arrgl[i])
                        {
                            printf("Que caracter reemplazara a '%c': ",nombre[j]);
                            scanf("%s",&crrcn_car);
                            nombre[j]=crrcn_car;
                            }
                    }
                }
            printf("\n\t\t%s",nombre); //SE IMPRIME LA CADENA CORREGIDA
			break;
		default:
			break;
        }
	}while(resp!='s');
    printf("\n\t\t=================================\n");
    strcpy(copia, nombre);//COPIA DE CADENA
    i = strcmp(copia, nombre);//i=0 SIGNIFICA IGUALDAD EN LA CADENA
    if(i==0)
    {
        printf("\t\t%s----copia---->%s\nCopia Exitosa.\n\n",nombre, copia);
        }
	return 0;
}
