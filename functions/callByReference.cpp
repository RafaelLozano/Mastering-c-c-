#include<stdio.h>
void swapv2(int &x, int &y); //call by reference is only available on c++
int main(int argc, char const *argv[])
{
    int a, b, c;
    a = 10;
    b = 25;
    printf("a=%d b=%d \n", a, b);
    swapv2(a, b);
    printf("a=%d b=%d \n", a, b);
    return 0;
}
void swapv2(int &x, int &y) //call by reference
{
    int temp = x;
    x = y;
    y = temp;
}