#include <iostream>
struct Rectangle
{
    int lenght;
    int breadth;
};
int area(struct Rectangle &R1)//call by reference all modifications
{
    R1.lenght++;
    int area = R1.breadth * R1.lenght;
    return area;
}
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"Hola"<<endl;
    struct Rectangle r1={10,2};
    cout<<"Area:"<<area(r1)<<endl;
    cout<<"length:"<<r1.lenght<<endl;
    
    return 0;
}
