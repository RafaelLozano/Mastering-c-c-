#include<iostream>
struct Rectangle
{
    int lenght;
    int heigh;
};
using namespace std;

int main(int argc, char const *argv[])
{
    int a=10;
    int &r=a;//create alias of a call r
    
    cout<<"Variable a"<<a<<"Referencia:"<<r<<endl;
    r += 1;
    cout << "Variable a" << a << "Referencia:" << r<<endl;

    return 0;
}

