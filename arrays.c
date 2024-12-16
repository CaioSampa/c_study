#include <stdio.h>

// setando os prototypes
void times2(int *a, int len);
void times3(int a[], int len);
void times4(int a[5], int len);


int main (void) {
    // pegando o tamanho de um array de inteiros de 12 posicoes 
    printf("%zu \n", sizeof(int [12]));

    int arr[] = {944,625,7001};   

    // inicialiando array com de inteiros com todos valores sendo zero
    int array[100] = {0};

    int *pointer;

    // ponteiro aponta para o array (para o primeiro elemento)

    pointer = arr; /*São iguais*/ pointer = &arr[0];
    

    // inicializando um array2d com 2 linhas por 5 colunas 
    int array2d[2][5] = {{0},{0}};
    int tmp = 0;

    // percorrendo array bidimensional e add valores em sequencia començando do 0
    for(int i = 0 ; i <= sizeof(array2d[0]) / sizeof(array2d[0]); i++)
    {
        for(int j = 0; j < sizeof(array2d[0]) / sizeof(array2d[0][0]); j++)
        {
            if(tmp)
            {
                tmp++;
                array2d[i][j] = tmp;
                printf("%d A \n",array2d[i][j]);
            } else 
            {
                array2d[i][j] = j;
                printf("%d 1 \n",array2d[i][j]);
            }
            
            if(j == (sizeof(array2d[0]) / sizeof(array2d[0][0])) - 1 && (!tmp))
            {
                tmp = j;
            }
            
        }
    
    }

    int x[5] = {11, 22, 33, 44, 55};

    // chamando todas as funcoes time porém o primeiro argumento não muda apesar na declaracao serem diferentes eles sao todos iguais
    // ou seja *a == a[] == a[n] | o mais comum de longe e *a
    times2(x, 5);
    times3(x, 5);
    times4(x, 5);

    return (0);
}


 // Passing as a pointer to the first element
void times2(int *a, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d\n", a[i] * 2);
}
 // Same thing, but using array notation

void times3(int a[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d\n", a[i] * 3);

}
 // Same thing, but using array notation with size

void times4(int a[5], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d\n", a[i] * 4);
}
