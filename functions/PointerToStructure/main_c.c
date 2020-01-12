#include<stdio.h>
struct Rectangle
{
    int lenght;//longitud
    int breadth;//amplitud
};

int main(int argc, char const *argv[])
{
    struct Rectangle r = {10, 5}; //initializing 10,5 structure
    struct Rectangle *p=&r;//declare +  initialize
    printf("l=%d, b=%d \n",r.lenght,r.breadth);//se imprimen los datos actuales
    r.lenght=55;
    p->breadth = 20;//Linea que hace lo mismo (*p).breadth=20; ->para pointers
    printf("l=%d, b=%d \n", r.lenght, r.breadth); //se imprimen los datos actuales

    return 0;
}
