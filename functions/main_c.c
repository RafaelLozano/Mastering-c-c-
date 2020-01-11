//Funcions small task all the program
//breaking the program modular programming or procedural programming
//increase the reusability 
//break the programming into functions
//c is Modular, c++ follows object orientation
#include<stdio.h>
//protype
int add(int a, int b);//(formal parameters)

int main(int argc, char const *argv[])
{
    int x,y,z;
    x=10;
    y=5;
    z=add(x,y);
    printf("La suma de %d+%d=%d",x,y,z);

    return 0;
}
//declaration of the function
int add(int a, int b)
{
    int c = a + b;
    return c;
}