#include <stdio.h>

void sumVariable (int *n);

int main(void) 
{
    int i = 10, *p = &i; // i is int , p is a pointer to i
    int j = 10, k = 5; // single line declaration of variables

    char str[] = "457";
    int tmp = 0;

    *p = 15;
    printf("address of i %p \n", &i);
    printf("address of pointer P %p \n", &p);
    printf("the value of j is %d and the value of K is %d \n", j, k);
    tmp = str[0];
    str[0] = str[1];
    str[1] = tmp;
    
    // int i = 0;

    // while(i < 3) {
    //     printf("%c \n", str[i]);
    //     i++;
    // }

    sumVariable(p);
    printf("Sizeof p is %zu \n", sizeof p);
    printf("%d\n ", i);

    return 0;
}

void sumVariable(int *n) { *n+=1; }
