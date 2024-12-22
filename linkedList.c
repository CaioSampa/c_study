#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};


int main (void)
{

    struct node node1 = {1,NULL};   
    struct node node2 = {2, NULL};
    node1.next = &node2;
    printf("%d %d", node1.value, node1.next->value);
    // I will continue this later

    return 0;
}