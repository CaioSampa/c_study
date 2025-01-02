#include <stdio.h>

int main (void) 
{
    FILE *fp;

    fp = fopen("text.txt", "r");

    char buf[1024]; // 1kb tamanho suficiente por linha 
    int linecount = 0; // so para a contagem de linhas

    // lê uma linha de cada vez e exibe
    while (fgets(buf, sizeof buf, fp) != NULL)
        printf("%d: %s",++linecount, buf);

    fclose(fp);

    return 0;
}