//Division
#include <iostream>
#include <conio.h>
using namespace std;

class Division
{
private:
    float a, b, c;

public:
    void getdata();
    void compute();
};
void Division::getdata()
{
    cout << "Enter a and b: " << endl;
    cin >> a >> b;
}
void Division::compute()
{
    try
    {
        if (b == 0)
        {
            throw(b);
        }
        else
        {
            c = a / b;
            cout << "Divident is " << c << endl;
        }
    }
    catch (float b)
    {
        cout << "Zero Division Error!" << endl;
    }
}
int main()
{
    Division div;
    div.getdata();
    div.compute();
    return 0;
}
