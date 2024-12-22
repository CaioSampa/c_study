#include <stdio.h>

/*
Se uma funcao receber um ponteiro ela pode manipula-lo e contanto que seu endereco de memoria seja correto ira altera-lo dentro e fora do escopo da funcao 
*/

void changeArray (int *a) 
{
    for(int i = 0 ; i < 3; i++)
        a[i] *= 2;
}

int main (void) 
{

    int array[] = {1,2,3};

    // arrays sao ponteiros logo podemos passar o array para uma funcao que recebe um ponteiro como arg

    changeArray(array);

    for(int i = 0 ; i < 3; i++)
        printf("%d \n", array[i]);
    

    return (0);
}