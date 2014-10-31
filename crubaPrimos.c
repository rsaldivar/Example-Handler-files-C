#include<stdio.h>
 
int main()
{
  int n=0,i=0,j=0,residuo=0,nc=0;
  

		printf("Introduce el limite de numeros: ");
		scanf("%i",& n);

/*Primer ciclo aumenta i hasta el maximo elegido por el usuario*/
for( i=1 ; i<=n ; i++ ){
	   
	/*Primer ciclo aumenta i hasta el numero i */
	 for( j=1 ; j<=i ; j++ ){
		
	      residuo = i%j ;
	      if(residuo==0)	nc = nc+1 ;//IF
		
				
				}//FOR

	if(nc==2)
      printf(" %i \n ", i);


	    nc=0;

		  }//S.FOR

return 0;
}//MAIN
