#include <iostream>
struct Rectangle
{
    int lenght;
    int breadth;
};
void ChangeLength(Rectangle *p, int newlength)
{
    p->lenght=newlength;
}

using namespace std;

int main(int argc, char const *argv[])
{
    struct Rectangle r1 = {10, 2};
    cout<<"Before ChangeLength:"<<r1.lenght<<endl;
    ChangeLength(&r1,25);
    cout << "After ChangeLength:" << r1.lenght << endl;

    return 0;
}
