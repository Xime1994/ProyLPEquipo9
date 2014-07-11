# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <iostream.h>
# include <time.h>



// crear el archivo


struct fecha{   //STRUCT
  char anio[5];
  char mes[4];
  char dia[4];
  char hora[4];
  char min[4];

  };
struct datos{
  char evento[20];
  char desc[50];
  fecha fechai, fechaf;
  } registro;

datos eventos[20];
int main(int argc,char* argv[])
{
  int anioactual, mesactual, diactual,horactual,minactual;
  int cr=0;
  int a,op;
  time_t tiempo = time(0);
           	struct tm *tlocal = localtime(&tiempo);
            anioactual = tlocal->tm_year + 1900;
            mesactual = tlocal->tm_mon + 1;
            diactual = tlocal->tm_mday;
            horactual = tlocal->tm_hour;
            minactual = tlocal->tm_min;
  do
    {


 		printf("\n    ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO ");
 		printf("\n                    MI AGENDA");
 		printf("\n       ESCUELA DE INFORMATICA Y ELECTRONICA ");
 		printf("\n   INGENIERIA EN TELECOMUNICACIONES Y REDES ");
 		printf("\n\n 1. INGRESE NUEVO EVENTO ");
      printf("\n\n 2. VER MIS EVENTOS PARA HOY");
 		printf("\n\n 3. VER MIS EVENTOS TODA LA SEMANA");
	   printf("\n\n 4. SALIR");
 		printf("\n\n INGRESE SU OPCION:  ");
 		cin>>a;
switch(a)
{
	case 1: {

  					puts("\n INGRESE EL EVENTO");
  					gets(registro.evento);
               puts("\n INGRESE LA DESCRIPCION");
               gets(registro.desc);
 				   puts("\n\n\n   INGRESE LA FECHA DE INICIO");
  					puts("\n INGRESE EL ANIO");
 				   gets(registro.fechai.anio);
               puts("\n INGRESE EL MES");
  					gets(registro.fechai.mes);
  					puts("\n INGRESE EL DIA");
  					gets(registro.fechai.dia);
  					puts("\n INGRESE LA HORA");
  					gets(registro.fechai.hora);
 				   puts("\n INGRESE LOS MINUTOS");
 				   gets(registro.fechai.min);
  					puts("\n\n \n  INGRESE LA FECHA DE FINALIZACION");
  					puts("\n\ INGRESE EL ANIO");
  					gets(registro.fechaf.anio);
  					puts("\n INGRESE EL MES");
  					gets(registro.fechaf.mes);
  					puts("\n INGRESE EL DIA");
  					gets(registro.fechaf.dia);
  					puts("\n INGRESE LA HORA");
               gets(registro.fechaf.hora);
  					puts("\n INGRESE LOS MINUTOS");
  					gets(registro.fechaf.min);
  					eventos[cr]=registro;
               cr++;
  // abri el archivo

			  break;
			  }
   case 2: {

  				int i;


           	int anioreg  = atoi(registro.fechai.anio);
           	int mesreg   = atoi(registro.fechai.mes);
           	int diareg   = atoi(registro.fechai.dia);
           	int horareg  = atoi(registro.fechai.hora);
           	int minreg   = atoi(registro.fechai.min);

         for ( i=0;i<=cr-1;i++)
            {

              if((anioreg == anioactual)&&(mesreg == mesactual)&&(diareg == diactual))
                {

                  registro=eventos[i];
            		puts("\n\n EVENTO");
            		puts(registro.evento);
            		puts("\n\n DESCRIPCION");
            		puts(registro.desc);
            		puts("\n\n DESDE");
            		puts(registro.fechai.anio);
            		puts(registro.fechai.mes);
            		puts(registro.fechai.dia);
            		puts(registro.fechai.hora);
            		puts(registro.fechai.min);
            		puts("\n\n HASTA");
            		puts(registro.fechaf.anio);
            		puts(registro.fechaf.mes);
            		puts(registro.fechaf.dia);
            		puts(registro.fechaf.hora);
                  puts(registro.fechaf.min);

            		getch();

              }
            }

            break;
					 }

         case 3:{
                      int regular[]={ 0,3,3,6,1,4,6,2,5,0,3,5};
                      int bisiesto[]={0,3,4,0,2,5,0,3,6,1,4,6};
                      int  result1, result2, result3, result4, result5,d,d1,i;
                      int m = mesactual;
                      if((anioactual%4==0)&& ! (anioactual%100==0))
                        {
                          m=bisiesto[m-1];
                        }
                      else if (anioactual%400==0)
                        {
                          m=bisiesto[m-1];
                        }
                      else
                        {
                           m=regular[m-1];
                        }
                  			result1=(anioactual-1)%7;
                  			result2=(anioactual-1)/4;
                  			result3=(3*(((anioactual-1)/100)+1))/4;
                  			result4=(result2-result3)%7;
                  			result5=diactual%7;
                  			d=((result1+result4+m+result5)%7);
                  			d1=diactual-(d-1);


                            int k;


                  	      for(i= d1; i<=diactual;i++)
                  		    {
                              for(k =0; k<cr ; k++)
                              {
                              registro=eventos[k];
                              int anioreg  = atoi(registro.fechai.anio);
                              int mesreg   = atoi(registro.fechai.mes);
           							int diareg   = atoi(registro.fechai.dia);
           							int horareg  = atoi(registro.fechai.hora);
                              int minreg   = atoi(registro.fechai.min);

                            if((anioreg == anioactual)&&(mesreg == mesactual)&&(diareg == i))
                            {

                            	puts("\n\n EVENTO");
                              puts(registro.evento);
                            	puts("\n\n DESCRIPCION");
                            	puts(registro.desc);
            				  	 	puts("\n\n DESDE");
                              puts(registro.fechai.anio);
                              puts(registro.fechai.mes);
                              puts(registro.fechai.dia);
                              puts(registro.fechai.hora);
                              puts(registro.fechai.min);
                              puts("\n\n HASTA");
                              puts(registro.fechaf.anio);
                              puts(registro.fechaf.mes);
                              puts(registro.fechaf.dia);
                              puts(registro.fechaf.hora);
                              puts(registro.fechaf.min);



            			       getch();
                             }
                            }
                         }
                 break;
                }

         }
         }

         while(a == 1);
         printf("\n \n QUIERE REGRESAR AL PRIMER MENU:  ");
        scanf("%d",&op);
       getch();
    }


