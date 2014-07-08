# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <iostream.h>

// crear el archivo


struct fecha{   //STRUCT
  char anio[3];
  char mes[3];
  char dia[3];
  char hora[3];
  char min[3];

  };
  struct datos{
  char evento[20];
  char desc[50];
  fecha fechai, fechaf;
  } registro;



void main ()
{
datos eventos[20];
int a,op;
do
{

 printf("\n    ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO ");
 printf("\n                    MI AGENDA");
 printf("\n       ESCUELA DE INFORMATICA Y ELECTRONICA ");
 printf("\n   INGENIERIA EN TELECOMUNICACIONES Y REDES ");
 clrscr();
 printf("\n\n 1. INGRESE NUEVO EVENTO ");
 printf("\n\n 2. VER MIS EVENTOS PARA HOY");
 printf("\n\n 3. VER MIS EVENTOS TODA LA SEMANA");
 printf("\n\n 4. SALIR");
 printf("\n\n INGRESE SU OPCION:  ");
 cin>>a;
switch(a)
{
case 1: {
  puts("INGRESE EL EVENTO");
  gets(registro.evento);
  puts("INGRESE LA DESCRIPCION");
  gets(registro.desc);
  puts("INGRESE LA FECHA DE INICIO");
  puts("INGRESE EL ANIO");
  gets(registro.fechai.anio);
  puts("INGRESE EL MES");
  gets(registro.fechai.mes);
  puts("INGRESE EL DIA");
  gets(registro.fechai.dia);
  puts("INGRESE LA HORA");
  gets(registro.fechai.hora);
  puts("INGRESE LOS MINUTOS");
  gets(registro.fechai.min);
  puts("INGRESE LA FECHA DE FINALIZACION");
  puts("INGRESE EL ANIO");
  gets(registro.fechaf.anio);
  puts("INGRESE EL MES");
  gets(registro.fechai.mes);
  puts("INGRESE EL DIA");
  gets(registro.fechaf.dia);
  puts("INGRESE LA HORA");
  gets(registro.fechaf.hora);
  puts("INGRESE LOS MINUTOS");
  gets(registro.fechaf.min);
  eventos[1]=registro;
  // abri el archivo

break;
}
         printf("\n \n QUIERE REGRESAR AL PRIMER MENU:  ");
       scanf("%d",&op);

   }
   }
    while(op==1);
     getch();
     }
