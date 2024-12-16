#include <stdio.h>

struct car 
{
    char *name;
    float price;
    int speed;
};

struct person
{
    char *name;
    int age;
};

struct food 
{
    char * name;
    float price;
};
// we can access the fields of the struct with ->
void set_price (struct car *p, float new_price) {
    p->price = new_price;
}

int main (void){

    struct car palio;

    palio.name = "palio fire";
    palio.price = 19999.99;
    palio.speed = 250;

    struct car *pointer_to_car = &palio; 

    set_price(pointer_to_car, 370.45); // or we can pass to the function &palio that works to

    printf("%s \n", palio.name);
    printf("%f \n", palio.price);
    printf("%d \n", palio.speed);

    struct person me = {"caio",21};

    printf("%s \n", me.name);
    printf("%d \n", me.age);

    struct food hamburguer = {.price=15.14};

    printf("%s \n ", hamburguer.name);
    printf("%f \n", hamburguer.price);

    return 0;
}