#include <stdio.h>

/*
    Helper Buffer

    é simplesmente aqueles buffers que são usados em nosso programa para simplificar o algoritmo. Tal como converter uma string em int, nós podemos usar sscanf() para ler a string como um buffer e armazenar os dados em uma variavel do tipo int.

*/
int main (void)
{

   char num[10] = "1234";
   int n;

   //converter string para int
   sscanf(num,"%d",&n);

   printf("The number is : %d", n);

   return 0;
}