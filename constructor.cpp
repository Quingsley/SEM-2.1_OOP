//CONSTRUCTOR
#include <iostream>
using namespace std;
class integer
{
    private:
        int a,b;
    public:
        void getdata();
        integer(int,int); //CONSTRUCTOR
};
integer :: integer(int x,int y=14)
{
    a=x;
    b=y;
    cout << a << endl;
    cout << b << endl;
     
}
void integer :: getdata()
{
   /* cout << "Enter the value of a: ";
    cin >> a;
    cout << "a= " << a << endl;
    cout << b;*/

}
int main()
{
    integer num(3,19);
    //num.getdata();
    return 0;
}