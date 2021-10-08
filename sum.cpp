//ADDITION
#include <iostream>
#include <conio.h>
using namespace std;
class addition
{
    private:
        int a,b,c;
    public:
        void getdata();
        void compute();
        void display();
};
void addition :: getdata()
{
    cout <<"Enter the values of a and b\n";
    cin >> a >> b;
}
void addition :: compute()
{
    c=a+b;
}
void addition :: display()
{
    cout << "The sum is " << c;
}
int main()
{
    addition add;
    add.getdata();
    add.compute();
    add.display();

    return 0;
}