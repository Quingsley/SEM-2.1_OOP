//example of constructor
#include<iostream>
#include<conio.h>
using namespace std;

class integer
{
private:
    int a,b;
public:
    integer(); //constructor
    void display();
};

integer :: integer()
{
    a=0;
    b=2;
}

void integer :: display()
{
    cout<<"values of a and b\n";
    cout<<"\na = "<<a<<"\t"<<"b = "<<b<<endl;
}

int main()
{
    integer int1;
    int1.display();
    return 0;
}
