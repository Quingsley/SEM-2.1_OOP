//multilevel inheritance
#include <iostream>
class A
{
public:
    void display0()
    {
        std::cout << "Base class content.\n";
    }
};
class B : public A
{
public:
    void display()
    {
        std::cout << "B class content.\n";
    }
};
class C : public B
{
public:
    void show()
    {
        std::cout << "\nmember of class C\n";
    }
};
int main()
{
    C c;
    B b;
    b.display();
    b.display0();
    c.display();
    c.show();
    return 0;
}