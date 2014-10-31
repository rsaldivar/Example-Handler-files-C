/*
 * SolucionGeneral.cpp
 *Uso de ncurses.h
 *conio.h sustituido
 *
 *  Created on: 19/08/2011
 *      Author: cruback
 */

#include<ncurses.h>

int main(){
	char nombre [10];
	initscr();
	erase();

	printw("Cual es tu nombre");

	scanw("%s ", &nombre);
	printw("\n\t Tu nombre es : %s" , nombre );

	getch();
	endwin();

	return 0;

}


/*Para compilar solo es 
gcc -lncurses codigofuente.c
*/

