#include <stdio.h>

int main (void) 
{
    FILE *fp;

    unsigned char bytes[6] = {5,89,24,48,78,3};

    fp = fopen("file.bin","wb");

    fwrite(bytes, sizeof bytes, 6, fp);

    fclose(fp);

    return 0;
}