#include"stdio.h"
#include"ncurses.h"


void brinco(){printw("\n\n\n\n\t\t\tBIENVENIDO , <Intro para continuar> :) ");getch();erase();}

int main(){
	



	/*INICIO DE NCURSES*/
	initscr();

	/*varibales locales*/
	int m,n,i,j;
	
	/*Creacion de la matrix*/
	printw("\n\n\t\t Ingresa la magnitud de tu matrix \n\n\n\t\t\t [m * n] ");
	printw(" \n m = ");
	scanw("%i",& m);
	printw(" \n n = ");
	scanw("%i",& n);
	printw("\n\n\n [%i * %i ]" , m , n);
	int arreglo[m][n];
	
	
	brinco();

	/*LLenar la matrix*/
	printw("Ingresa el valor de tus componentes");
	for(i=0; i<=m-1;i++){
	for(j=0; j<=n-1;j++){
	printw("\n\t [%d,%d]=",(i+1),(j+1));
	scanw("%d",& arreglo[i][j]);
				}
				}
	
			brinco();



	/*Impresion del llenado de la matrix*/
	for( i=0 ; i<m ; i++)
	{
	for( j=0 ; j<n ; j++)		printw("\t %i " ,arreglo[i][j]);
					printw("\n");
	}//For

		
			
			
					
				brinco();


	/*Sumar las columnas impares */
		int suma=0;

for( j=0 ; j < n ; j=j+2)
	{
		for(i=0 ; i< m ; i++)
		suma = arreglo[i][j] + suma;
	}//For1
	
	printw("\n La sema de las columnas es %i \n" ,suma);

		

	/*Obtener el promedio */
		float prom=0;


	prom  = (n * m) - m ;  
	prom =  suma / prom ;
	printw(" \n El promedio es : %f  \n" , prom);   
		

				brinco();



	/*Comparacion para obtener el  numero mayor  y el meno de nuestra matrix */
			int May = 0 ,may = 0 ,men = 0 , Men = 100000;

for( i=0 ; i<m ; i++)
	{
		for( j=0 ; j<n ; j++){	 	may = arreglo[i][j];
						men = arreglo[i][j];

		if(May < may)May = may; 
		if(Men > men)Men = men; 

					}
	}//For


	printw("\n\n\n El numero mayor de nuestra matrix es %i \n\n El numero menor de nuestra matrix es %i " , May , Men );		
			
			
				brinco(); 
	
	
endwin();
return 0;


}//MAIN
