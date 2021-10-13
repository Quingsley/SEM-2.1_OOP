//default constructor
#include<iostream>
#include<conio.h>

class integer
{
private:
    int a,b;
public:
    integer(int,int);
    void display();
};

integer :: integer(int x,int y=9)
{
    a=x,b=y;
}

void integer :: display()
{
    std::cout<<"\na= "<<a<<"\n";
    std::cout<<"\nb = "<<b<<"\n";
}

int main()
{
    integer int1(3);
    int1.display();
    return 0;
}
