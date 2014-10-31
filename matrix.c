#include<ncurses.h>

void brinco(){printw("\n\n\n\n\t\t\tBIENVENIDO , <Intro para continuar> :) ");getch();erase();}
void opcion1(){printw("has elegido calcular el nucleo");}
void opcion2(){printw("has elegido calcular la imagen de la matrix");}
void opcion3(){printw("Has elegido obtener el determinante de la matrix");}


int opcion4(int m, int n){
printf("\nEsto imprimira la matrix tranversa\n");
int i , j ;
int matrix[m][n];

for(i=0; i<=n-1;i++){
	for(j=0; j<=m-1;j++){
	printf("\t\t%d",matrix[i][j]);
			}
	printf("\n");		
			}			

return 0;
}



int main(){

	/*INICIO DE NCURSES*/
	initscr();

	/*variables locales*/
	int m=0 , n=0  , i=0 ,j=0 , opcion=0 , salir=0 ;

	/*Selecciona el tipo de matrix*/
	printw("\n\n\t\t Ingresa la magnitud de tu matrix \n\n\n\t\t\t [m * n] ");
	printw(" \n m = ");
	scanw("%i",& m);
	printw(" \n n = ");
	scanw("%i",& n);
	printw("\n\n\n [%i * %i ]" , m , n);
	int matrix[m][n];

	/*Pedir caracter y limpiar*/
	brinco();



	/*LLenar la matrix*/
	printw("Ingresa el valor de tus componentes");
	for(i=0; i<=m-1;i++){
	for(j=0; j<=n-1;j++){
	printw("\n\t [%d,%d]=",(i+1),(j+1));
	scanw("%d",& matrix[i][j]);
				}
				}
	erase();
	

	for(i=0; i<=n-1;i++){
	printw("\t\tX%d" ,(i+1));
	if(i==n-1)printw("\n\n");}
	
		

	/*Imprimir la Matrix*/
	for(i=0; i<=m-1;i++){
	for(j=0; j<=n-1;j++){
	printw("\t\t%d",matrix[i][j]);}
	printw("\n");		}			
	brinco();



	/*Menu de la programa OPERACIONES*/
	printw("\nAhora que operacion deseas\n\n");
	printw("\n\n\t1)Calcular nucleo\n\t2)Calcular Imagen\n\t3)Calclar Determinante\n\t4)Traspuesta de la matriz\n\t5)Salir\n");
	scanw("%d", & opcion);


	/*Seleccion del menu*/
	switch(opcion){


		case 1:
			opcion1();
			brinco();
		break ;
		case 2:
			opcion2();
			brinco();
		break ;
		case 3:
			opcion3();
			brinco();
		break ;
		case 4:
			opcion4(m ,n);
			brinco();										
		break ;
		default:printf("Saliendo..");
		break;

			}//FIN DE SWTICH

		



erase();
endwin();
return (0);
}

/*Para compilar solo es 
gcc -lncurses codigofuente.c
*/
