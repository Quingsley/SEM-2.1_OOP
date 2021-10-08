//SUM OF EVEN DIGITS IN A NUMBER
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n,sum,digit,temp;
    cout << "Enter a Value:\n";
    cin >> n;
    temp=n;
    sum=0;
    while(temp !=0)
        {
            digit=temp%10;
            if(digit%2==0)
                {
                    sum=sum+digit;
                }
                
            temp=temp/10;
        }
    cout << "SUM IS " << sum << endl;
    return 0;
    
}