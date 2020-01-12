#include <stdio.h>
struct Rectangle
{
    int lenght;
    int breadth;
    int array[2];
};
void ChangeLength(struct Rectangle *p, int newlength)
{
    p->lenght = newlength;
}
void changeArray(struct Rectangle *p,int value)
{
    p->array[0]=value;
}

int main()
{
    struct Rectangle r1 = {10, 2,{3,6}};
    printf("Before ChangeLength:%d \n",r1.array[0]);
    changeArray(&r1, 25);
    printf("After ChangeLength:%d \n", r1.array[0]);

    return 0;
}