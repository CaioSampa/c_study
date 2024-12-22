#include <stdio.h>

int main (void) 
{
/*
    Hardware buffer 

    geralmente é usado para as necessidades do hardware, eles são essenciais na transferencia de dados da memória para o dispostivo de hardware ou vice versa. Um bom exemplo é a operação de input (entrada) em C.

    se o buffer não estivesse envolvido aqui, somente uma parte do valor seria armazendo em var.
*/

   int var;
   printf("Write a number:");
   scanf("%d", &var);
   printf("Entered number : %d \n", var);


   return 0;
}