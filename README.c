//CALCULADORA

//Carlos Fernando Torres Cortes
//Barbosa Pacheco Jesus Gael
//Resendiz Carrera Armando Alan
#include <stdio.h>

int main()
{
char opcion;
float num1,num2,resultado;


printf("\n + SUMA ");
printf("\n - RESTA ");
printf("\n * MULTIPLICACION ");
printf("\n / DIVISION ");
printf("\n ELIGE UNA OPCION: ");
scanf("%c", &opcion);

printf("\n INGRESE NUMERO 1: ");
scanf("%f", &num1);
  
printf("\n INGRESE NUMERO 2: ");
scanf("%f", &num2);

switch(opcion){

case '+':
    
resultado = num1 + num2;
break;

case '-':
resultado = num1 - num2;
break;

case '*': 
resultado = num1 * num2;
break;

case '/':
resultado = num1 / num2;
break;

default:
printf("operacion no valida");



}

printf("Resultado de la operacion \n %f" ,resultado);
return 0;
}
