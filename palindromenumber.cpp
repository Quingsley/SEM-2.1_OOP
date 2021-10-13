/*PALINDROME NUMBER CHECK*/
#include<iostream>
#include<conio.h>
using namespace std;

class palindrome
{
private:
	int digit, num,no, reverse;
public:
	void getdata();
	void check();
};

void palindrome :: getdata()
{
   cout<<"\nenter a number to check\n";
   cin>>no;
}

void palindrome :: check()
{
reverse = 0;
    num = no;
    do
    {
	digit = num%10;
	reverse = (reverse*10) + digit;
	num = num/10;

    }
    while(num>0);

    if(reverse == no)
	cout<<"\npalindrome number\n";
    else
	cout<<"\n not a palindrome number\n";
}

int main()
{
palindrome pal;
pal.getdata();
pal.check();
return 0;
}
