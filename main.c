#include <stdio.h>

int main (int argc, char *argv[])
{
   /*
   |argc| is the number of command line parameters, including the name of the program itself. 
   |argv| is an array of the parameters, as character strings. 
   |argv[0]|, the first element in the array, is the name of the program as typed at the command line4;
   any following array elements are the parameters that followed the name of the program.
   */

  printf("%d \n", argc);

  for (int i = 0; i < 50; i++)
    printf ("%s\n \n", argv[i]);
  
  return 0;
}