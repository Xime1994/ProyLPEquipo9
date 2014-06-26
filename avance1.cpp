# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main ()
{
int a,b,op;
do
{
 clrscr();
 textcolor(BLUE);
 cprintf("\n    ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO ");
 cprintf("\n                    MI AGENDA");
 cprintf("\n       ESCUELA DE INFORMATICA Y ELECTRONICA ");
 cprintf("\n   INGENIERIA EN TELECOMUNICACIONES Y REDES ");
 clrscr();
 textcolor(GREEN);
	    cprintf("\n\n 1. INGRESE NUEVO EVENTO ");
	    cprintf("\n\n 2. VER MIS EVENTOS PARA HOY");
	    cprintf("\n\n 3. VER MIS EVENTOS TODA LA SEMANA");
       cprintf("\n\n 4. SALIR");
       cprintf("\n\n INGRESE SU OPCION:  ");
       scanf("%d",&a);
switch(a)
{
   clrscr();
   case 1: {
			           char evento[20];
                    char desc[50];
                    printf("NOMBRE DEL EVENTO:" );
                    scanf("%s ", evento);
                    printf(" DESCRIPCION DEL EVENTO:" );
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




