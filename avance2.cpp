# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <iostream.h>

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

datos eventos[20];

void main ()
{
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



			break;
			}
  case 2: {
         //sacar fecha del sistema
         for ( i=1;i<=20;i++)
         {
          if((aa==registro.fechai.anio)&&(ma==registro.fechai.mes)&&(da==registro.fechai.dia))
          {
            puts("EVENTO");
            puts(regitro.evento);
            puts("DESCRIPCION");
            puts(regitro.desc);
             puts("DESDE");
            puts(regitro.fechai.anio);
            puts(regitro.fechai.mes);
            puts(regitro.fechai.dia);
            puts(regitro.fechai.hora);
            puts(regitro.fechai.min);
            puts("HASTA");
            puts(regitro.fechaf.anio);
            puts(regitro.fechaf.mes);
            puts(regitro.fechaf.dia);
            puts(regitro.fechaf.hora);
            puts(regitro.fechaf.min);

            break;
            }
 case 3:  {
            // sacar fecha de la computadora
            






       }
       printf("\n \n QUIERE REGRESAR AL PRIMER MENU:  ");
       scanf("%d",&op);


   }
    while(op==1);
     getch();
    }




