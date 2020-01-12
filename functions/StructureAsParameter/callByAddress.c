#include <stdio.h>
struct Rectangle
{
    int lenght;
    int breadth;
};
void ChangeLength(struct Rectangle *p, int newlength)
{
    p->lenght = newlength;
}

int main()
{
    struct Rectangle r1 = {10, 2};
    printf("Before ChangeLength:%d \n",r1.lenght);
    ChangeLength(&r1, 25);
    printf("After ChangeLength:%d \n", r1.lenght);

    return 0;
}