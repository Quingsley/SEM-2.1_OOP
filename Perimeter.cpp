//PERIMETER OF A RECTANGLE
#include <iostream>
#include <conio.h>
using namespace std;
class perimeter
{
    private:
        int l,w,p;
    public:
        void getinputs();
        void compute();
        void display();
};
void perimeter ::getinputs() //the double colon is the resolution scope operator
{
    cout << "ENTER THE LENGTH AND WIDTH\n";
    cin >>l ;
    cin >> w ;
}
void perimeter :: compute()
{
    p=2*(l+w);
}
void perimeter :: display()
{
    cout << "The Perimeter is " << p << endl;
}
int main()
{
    perimeter rectangle;
    rectangle.getinputs();
    rectangle.compute();
    rectangle.display();

    return 0;
}