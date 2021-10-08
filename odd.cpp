//ODD NUMBERS BETWEEN 10 AND 50
#include <iostream>
#include <conio.h>
using namespace std;
class odd
{
    private:
       int s=0,num,n;
    public:
        void getnum();
        void output();
};
void odd :: getnum()
{
    for(num=10;num<=50;num++)
        {
            if(num%2==1)
                {
                    s+=num;
                }
            else
                continue;
        }
}
void odd ::output()
{
    cout << "The sum of odd numbers between 50 and 10 is " << s;
}
int main()
{
    odd numbers;
    numbers.getnum();
    numbers.output();

    return 0;
}