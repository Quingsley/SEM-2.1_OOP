//parameterized constructors example
#include<iostream>
#include<conio.h>
using namespace std;

class integer
{
private:
			int x,y;
public:
			integer(int,int); //constructor
};

integer :: integer(int m,int n)
{
	x=m;
	y=n;
  // x=x+5;
	cout<<"\nx = "<<x<<endl;
	cout<<"\ny = "<<y<<endl;
}

int main()
{
integer int1(9,7);            //constructor called implicitly
integer int2=integer(1,3);   //constructor called explicitly
return 0;
}

