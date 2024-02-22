//CALCULADORA
//librerias
#include <stdio.h>

int main()
{

char opcion;
float num1,num2;
  
//MENU
printf("ELIGE UNA OPCION: +,-,*,/ ");
printf("\n + SUMA ");
printf("\n - RESTA ");
printf("\n * MULTIPLICACION ");
printf("\n / DIVISION ");

scanf("%c", &opcion);


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
return 0;
}

float mul(float num1, float num2){
  float res;
  res = num1 * num2;
  return res;
}

float div(float num1, float num2){
  float res;
  if(num2 == 0){
    printf("Division sobre 0");
    break;
  }
  res = num1 / num2;
  return res;
}
