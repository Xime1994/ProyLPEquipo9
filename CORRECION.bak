
#include <stdio.h>
#include <time.h>
#include <conio.h>


int main(int argc,char* argv[]) {

        time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        printf("%s\n",output);
        int anioactual = tlocal->tm_year;
        int mesactual = tlocal->tm_mon;
        getch();
}


