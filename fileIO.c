#include <stdio.h>

//  ./executavel > output.txt 2> errors.txt permite usarmos fprintf() com streams como stdin, stdout ou stderr para escrever num arquivo

int main (int argc, char *argv[]) 
{
    
    // EOF is equal the operator \0 what is end of line
    
    FILE *fp;

    fp = fopen("text.txt", "r");

    int c; 
    // lê um caractere de cada vez e exibe
    while ((c = fgetc(fp))!= EOF)
        printf("%c", c);

    fclose(fp);

    return 0;
}