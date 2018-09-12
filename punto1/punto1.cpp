/*
*programa:punto1
*fecha:11/09/18
*autor:sletsen duque vargas 
*/


#include <stdio.h>

using namespace std;

int main() 
{
	char n='s';
	
	do
   {
	float preg=0,pregA=0 ;
	 float porcentaje; 
	 printf("ingrese el numero de preguntas: ");
	  scanf("%d", &preg);
	 printf("ingrese el numero de preguntas acertadas: ");
	  scanf("%d", &pregA);
	   
	  porcentaje =pregA/preg;
	  porcentaje=porcentaje*100;
	  
	  
	  if(porcentaje>=80)
	  {
		  printf ("porcentaje de las preguntas acertadas : %f nivel maximo.\n",porcentaje);
	  }
	  else if (porcentaje>=70&&porcentaje<80)
	  {
		  printf ("porcentaje de las preguntas acertadas : %f nivel medio .\n",porcentaje);
	  }
	  else if (porcentaje>=40&&porcentaje<70)
	  {
		  printf ("porcentaje de las preguntas acertadas : %f nivel regular .\n",porcentaje);
	  }
	  else if (porcentaje<40)
	  {
		  printf ("porcentaje de las preguntas acertadas : %f fuera de nivel .\n",porcentaje);
	  }
	   
	    printf("ingresar mas informacion? (si=0/no=1)");
	   scanf("%d", &n);
	   
   }while(n!=1);
	
	
	
	
	
	
	
	return 0;
}

