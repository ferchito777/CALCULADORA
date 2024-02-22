//CALCULADORA
//librerias
#include <stdio.h>

int main()
{

char opcion;
float num1,num2,res;
  
//MENU
printf("ELIGE UNA OPCION: +,-,*,/ ");
printf("\n + SUMA ");
printf("\n - RESTA ");
printf("\n * MULTIPLICACION ");
printf("\n / DIVISION ");

scanf("%c", &opcion);

//operaciones
switch(opcion){

case '+':
res = num1 + num2;
break;

case '-':
res = num1 - num2;
break;

case '*': 
res= num1*num2;
break;

case '/':
res= num1/num2;
break;

default:
printf("operacion no valida");


}

   printf("Resultado de la operacion \n %f" res);
return 0;

}
