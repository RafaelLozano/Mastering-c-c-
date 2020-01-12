#include <stdio.h>
struct Rectangle
{
    int lenght;
    int breadth;
};
int area(struct Rectangle R1)
{
    int area=R1.breadth*R1.lenght;
    return (area);
}
int main(int argc, char const *argv[])
{
    printf("Hola \n");
    struct Rectangle r1={10,2};
    return 0;
}
