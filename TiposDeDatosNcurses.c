/* 
 * File:   Leer tipos de datos
 * Author: Roberto Saldivar
 * Created on 17 de agosto de 2011, 07:24 AM
 */

#include"ncurses.h"
#include"math.h"

int main() {
initscr();
erase();

    int tipo , condicion ;

    while( condicion  != 7 ){
    printw("\n--------------------------------------------------\n"
            "Eligue el tipo de dato \n1-Entero \n2-Long\n3-Double\n4-Flotante\n5-Char\n6-Cadena "
            "\n\t\t\t 7 --------------------- SALIR \n"
            "---------------------------------------------------\n");
    scanw("%d", & tipo);
    switch (tipo){

//Declaracion variables TIPOS
int entero=0; long Entero=0; double Double=0; float flotante=0;
char  caracter  ;
char  Cadena [10];


        case 1 :
printw("\nIngresa un numero entero  ");
scanw("%i", & entero);
printw("\n\n\tel entero es:%i \n\n", entero);
        break;
        case 2:
printw("\nIngresa un numero  tipo long  ");
scanw("%ld", & Entero);
printw("\n\n\tel entero es:%ld \n\n", Entero);
        break;
        case 3:
printw("\nIngresa un numero double  ");
scanw("%lf", & Double );
printw("\n\n\tel edouble es:%lf \n\n", Double);
        break;
        case 4:
printw("\nAhora flotante  ");
scanw("%f", & flotante);
printw("\n\n\tel entero es:%f \n\n", flotante);
        break;
        case 5:
printw("\nIngresa un caracter  ");
scanw("%c", & caracter );
printw("\n\n\tel caracter es:%s \n\n", caracter );
        break;
        case 6:
printw("\nIngresa una cadena de caracters de 10 digitos   :");
scanw("%s", & Cadena);
printw("\n\n\tLa cadena es :%s \n \n", Cadena);
        break;
        case 7: //indica a while el valor para salir CENTINELA
           
 printw("ADIOS!!  :)");
            condicion = 7;
        break;
            } //FINDE WHILE
}

//getch();
endwin();
return 0;


}


