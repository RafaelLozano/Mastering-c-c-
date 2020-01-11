#include<stdio.h>
struct Rectangle
{
    int lenght;//longitud
    int breadth;//amplitud
};
int main(int argc, char const *argv[])
{
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->lenght=10;
    p->breadth=5;
    return 0;
}
