#include <stdio.h>

int main (void) 
{
    int quit = 0;
    int operation = 0;
    int n1 = 0, n2 = 0;

    while (!quit)
    {
        printf("---------Calculator-------------\n");
        printf("write 1 for operation (+) ADDITION \n");
        printf("write 2 for operation (-) SUBTRACTION\n");
        printf("write 3 for operation (x) MULTIPLICATION\n");
        printf("write 4 for operation (/) DIVISION\n");
        printf("write 5 for quit \n");

        scanf("%d",&operation);

        if(operation == 5) {
            quit = 1;
            break;
        }
        

        printf("write first value: \n");
        scanf("%d", &n1);
        printf("write second value: \n");
        scanf("%d", &n2);

        switch (operation)
        {

        case 1:
            printf("%d \n", (n1 + n2));
            break;
        case 2:
            printf("%d\n", (n1 - n2));
            break;
        case 3:
            printf("%d\n", (n1 * n2));
            break;
        case 4:
            printf("%d\n", (n1 / n2));
            break;
        default:
            quit = 1;
            break;
        }

    }


    return 0;
}