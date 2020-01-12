//array as parameter in functions
#include<stdio.h>
void printArray(int array[],int arraySize)//call by address so we can change de value on the main function
{
    for (size_t i = 0; i < arraySize; i++)
    {
        printf("%d ",array[i]);
    }
}
int * returnArray(int size)
{
    int *p;
    p = (int *)malloc(size * sizeof(int));
    return (p);
}
int main(int argc, char const *argv[])
{
    int a[5]={1,2,3,5,6};
    printArray(a,5);
    return 0;
}
