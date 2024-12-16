#include <stdio.h>
// definindo uma constante
#define nome "Caio"
/*
Nao podemos passar simplesmente um ponteiro para a funcao,
pois a compilador vai reclamar da 2 dimensao ou mais, pois nao foi informada.
*/

void print_2D_array (int a[][3]) // int a[][3] OU int a[2][3] SAO IGUAIS
{
    for (int row = 0; row < 2; row++) 
    {
        for (int col = 0; col < 3; col++)
            printf("%d ", a[row][col]);
        printf("\n");
    }
}

int main (void) {
    // array 2 rows 3 col
    int array2d[][3] = {
        {1,2,3},
        {4,5,6}
    }; 

    printf("%s",nome);
    
    print_2D_array(array2d);

    return (0);
}