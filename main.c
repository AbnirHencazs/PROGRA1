//autor: Brian Sanchez PROGRAMACION 1 Verano 2018
#define MAX_MTRX 5
 #include <stdio.h>
 #include <string.h>
 int main()
 {
     int    fil_A,col_A,fil_B,col_B,fil_S,col_S;
     int    i,j,k;
     int    mtrxa[MAX_MTRX][MAX_MTRX];
     int    mtrxb[MAX_MTRX][MAX_MTRX];
     int    mtrxres[MAX_MTRX][MAX_MTRX]={0,0};
     char   Op, siono, mtx;
     //A
     printf("Numero de columnas de la matriz 'A': ");
     scanf("%d",&col_A);
     printf("Numero de filas de la matriz 'A': ");
     scanf("%d",&fil_A);
     
     for(i=0;i<fil_A;i++)
     {
         for(j=0;j<col_A;j++)
         {
             printf("Ingrese el valor de la posicion %d,%d: ",i,j);
             scanf("%d", &mtrxa[i][j]);
             }
     }
     //B
     printf("Numero de columnas de la matriz 'B': ");
     scanf("%d",&col_B);
     printf("Numero de filas de la matriz 'B': ");
     scanf("%d",&fil_B);
     
     for(i=0;i<fil_B;i++)
     {
         for(j=0;j<col_B;j++)
         {
             printf("Ingrese el valor de la posicion %d,%d: ",i,j);
             scanf("%d", &mtrxb[i][j]);
             }
     }
     //IMPRESION
     printf("A:\n");
     for(i=0;i<fil_A;i++)
     {
         for(j=0;j<col_A;j++)
         {
             printf("\t%i\t",mtrxa[i][j]);
             }
             if(i==0)
             {
                 printf("\n");
                 }
                 if(i>0)
                 {
                     printf("\n");
                     }
     }
     printf("B:\n");
     for(i=0;i<fil_B;i++)
     {
         for(j=0;j<col_B;j++)
         {
             printf("\t%i\t",mtrxb[i][j]);
             }
             if(i==0)
             {
                 printf("\n");
                 }
                 if(i>0)
                 {
                     printf("\n");
                     }
        }
    //CALCULOS
    do{
        printf("Escriba el signo de operacion que desea (+,T,*,^): ");
        scanf("%c", &Op);
        scanf("%c", &Op);
        switch(Op)
        {
            case '+':
            if(fil_A==fil_B && col_A==col_B)
            {
                fil_S=fil_A;
                col_S=col_B;
                for(i=0;i<fil_S;i++)
                {
                     for(j=0;j<col_S;j++)
                     {
                         mtrxres[i][j] = mtrxa[i][j] + mtrxb[i][j];
                         }
                    }
                    printf("RESULTADO:\n");
                     for(i=0;i<fil_S;i++)
                     {
                         for(j=0;j<col_S;j++)
                         {
                             printf("\t%i\t",mtrxres[i][j]);
                             }
                             if(i==0)
                             {
                                 printf("\n");
                                 }
                                 if(i>0)
                                 {
                                     printf("\n");
                                     }
                        }
               }
               else
               {
                   printf("\nOperacion invalida, revise las dimensiones de las matrices.");
                   }
            break;
            
            case '^':
            printf("Que matriz desea elevar a la segunda potencia?: ");
            scanf("%c",&mtx);
            scanf("%c",&mtx);
            switch(mtx)
            {
                case 'A':
                if(col_A==fil_A)
                {
                    fil_S = fil_A;
                    col_S = col_A;
                    for(i=0;i<fil_S;i++)
                    {
                        for(j=0;j<col_S;j++)
                        {
                            //mtrxres[i][j]=0;
                            for(k=0;k<col_A;k++)
                            {
                                mtrxres[i][j]+=mtrxa[i][k]*mtrxa[k][j];
                                }
                            }
                        }
                        printf("RESULTADO:\n");
                         for(i=0;i<fil_S;i++)
                         {
                             for(j=0;j<col_S;j++)
                             {
                                 printf("\t%i\t",mtrxres[i][j]);
                                 }
                                 if(i==0)
                                 {
                                     printf("\n");
                                     }
                                     if(i>0)
                                     {
                                         printf("\n");
                                         }
                            }
                    }
                    else
                        {
                            printf("La potencia solo se da en Matrices cuadradas, porfavor reingrese su Matriz.");
                            }
                break;
                case 'B':
                if(col_B==fil_B)
                {
                    fil_S = fil_B;
                    col_S = col_B;
                    for(i=0;i<fil_S;i++)
                    {
                        for(j=0;j<col_S;j++)
                        {
                            //mtrxres[i][j]=0;
                            for(k=0;k<col_B;k++)
                            {
                                mtrxres[i][j]+=mtrxb[i][k]*mtrxb[k][j];
                                }
                            }
                        }
                        printf("RESULTADO:\n");
                         for(i=0;i<fil_S;i++)
                         {
                             for(j=0;j<col_S;j++)
                             {
                                 printf("\t%i\t",mtrxres[i][j]);
                                 }
                                 if(i==0)
                                 {
                                     printf("\n");
                                     }
                                     if(i>0)
                                     {
                                         printf("\n");
                                         }
                            }
                    }
                    else
                        {
                            printf("La potencia solo se da en Matrices cuadradas, porfavor reingrese su Matriz.");
                            }
                break;
                default:
                break;
                }
            break;
            
            case '*':
            if(col_A == fil_B)
            {
                fil_S = fil_A;
                col_S = col_B;
                for(i=0;i<fil_S;i++)
                {
                    for(j=0;j<col_S;j++)
                    {
                        for(k=0;k<col_A;k++)
                        {
                            mtrxres[i][j]+=mtrxa[i][k]*mtrxb[k][j];
                            }
                        }
                    }
                    printf("RESULTADO:\n");
                     for(i=0;i<fil_S;i++)
                     {
                         for(j=0;j<col_S;j++)
                         {
                             printf("\t%i\t",mtrxres[i][j]);
                             }
                             if(i==0)
                             {
                                 printf("\n");
                                 }
                                 if(i>0)
                                 {
                                     printf("\n");
                                     }
                        }
                }
            break;
            case 'T':
            break;
            default:
            break;
            }
        printf("\nDesea realizar otra operacion?(s/n): ");
        scanf("%c",&siono);
        scanf("%c",&siono);
        }while(siono!='n');
}
