#include <stdio.h>
#define MAX_DATA_SIZE 1000
   
/*
    Cache Buffer

   Esses tipos de buffers são usados para otimizar o desempenho das operações de input/output assim reduzindo o numero de leitura e escrita no sistemad de chamadas para o sistema operacional. pegue o exemplo de ler um dado em C, Nós podemps usar as funções fgetc() ou fgets() para ler mas se nós usamos fgetc, nos vamos ler o dados caracter por caracter fazendo muitas chamadas a função  read () idependente de quantos caracteres tiverem. Mas como fgets(), nós podemos usar um buffer e ler uma grande quantidade de dados em uma unica chamada de sistema read ()

*/

int pointer = 0;

void copyData(char* data, char* buffer)
{
    int i = 0;
    while (buffer[i])
    {
        if(MAX_DATA_SIZE < pointer)
            data[pointer++] = buffer[i];
        else 
            return;
    }
}
// esse programa pode ler 1000 bytes de dados em 10 chamadas de sistema da função read()
int main (void) 
{
    FILE* fptr = fopen("text.txt","r");

    char data[MAX_DATA_SIZE] = "";
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fptr))
        copyData(data, buffer);
    
    printf("ok \n");

    return 0;
}