#include <stdio.h>

int main (void) 
{
    FILE *fp;

    int x = 32;

    fp = fopen("output.txt", "w");
    //fp = stdout; vai exibir no console ao invés do arquivo

    fputc('C', fp);
    fputc('\n',fp); 

    fprintf(fp,"x = %d\n", x);

    fputs("Hello world! \n", fp);

    fclose(fp);

    return 0;
}