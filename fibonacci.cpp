//FIBONACCI NUMBERS TO THE TENTH TERM
#include <iostream>
#include <conio.h>
using namespace std;
class numbers
{
    private:
        int f=0,s=1,i=0,n=0;
    public:
        void calculate();
};
void numbers :: calculate()
{
    for(i=0;i<10;i++)
        {
            if(i<=1)
                {
                    n=i;
                    cout << n << ", ";
                }
            else
                {
                    n=f+s;
                    f=s;
                    s=n;
                    cout << n << ", ";
                }
        }
}
int main()
{
    numbers fib;
    fib.calculate();

    return 0;
}