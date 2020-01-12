//Funcions small task all the program
//breaking the program modular programming or procedural programming
//increase the reusability 
//break the programming into functions
//c is Modular, c++ follows object orientation
#include<stdio.h>
//protype
int add(int a, int b);//(formal parameters)
void swap(int *x, int *y);//call by adress
//void swapv2(int & x, int & y);//call by reference is only available on c++

int main(int argc, char const *argv[])
{
    int a,b,c;
    a=10;
    b=25;
    printf("a=%d b=%d \n", a, b);
    swap(&a,&b);
    printf("a=%d b=%d \n",a,b);

    return 0;
}
void swapv2(int & x, int & y)//call by reference
{
    int temp = x;
    x = y;
    y = temp;
}

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    
}

//declaration of the function
int add(int a, int b)
{
    int c = a + b;
    return c;
}