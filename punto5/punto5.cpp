/*
programa: punto5
fecha: 11/09/18
autor: sletsen duque vargas
*/

#include <conio.h>
#include <stdio.h>


void cuadrado();
int main(){
cuadrado();
}
void cuadrado(){
	float n, cuadrad;
	printf ("ingrese un numero : ");
	scanf("%f",&n);
	cuadrad=n*n;
	printf("el cuadrado de su numero es: %f",cuadrad);
	
}
