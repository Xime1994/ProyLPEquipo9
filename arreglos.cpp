# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <iostream.h>
void main ()
{
int a,b,op;
do
{

 printf("\n                       ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO\n ");
 printf(" \n                                  MI AGENDA\n");
 printf(" \n                        ESCUELA DE INFORMATICA Y ELECTRONICA\n ");
 printf("\n                       INGENIERIA EN TELECOMUNICACIONES Y REDES \n\n\n");
 printf("MENU: \n");

 printf("\n 1. INGRESE NUEVO EVENTO\n ");
 printf("\n 2. VER MIS EVENTOS PARA HOY\n");
 printf("\n 3. VER MIS EVENTOS TODA LA SEMANA\n");
 printf("\n 4. SALIR\n");
 printf("\n INGRESE SU OPCION:  ");
 scanf("%d",&a);
switch(a)
{
   case 1:
     {              char evento[20];
                    char desc[50];
                    printf("\nNOMBRE DEL EVENTO:" );
                    scanf("%s ", evento);
                    printf(" \nDESCRIPCION DEL EVENTO:" );
                    scanf("%s ",desc);
			break;
			}
       }
       printf("\n \n QUIERE REGRESAR AL PRIMER MENU:  ");
       scanf("%d",&op);

   }
    while(op==1);
     getch();
    }
