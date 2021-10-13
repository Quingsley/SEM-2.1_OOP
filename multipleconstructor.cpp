//Multiple constructors example
#include<iostream>
#include<conio.h>
using namespace std;

class integer
{
private:
			int x,y;
            int a,b;
public:
			integer(int,int); //constructor1
			integer();      //constructor2
			void display();
};
integer :: integer()
{
    a=0;
    b=2;
}

void integer :: display()
{
    cout<<"values of a and b\n";
    cout<<"\na = "<< a <<"\t" << "b = " <<b << endl;
}

integer :: integer(int m,int n=345)
{
	x=m;
	y=n;
   //x=x+5;
	cout<<"\nx = "<<x<<endl;
	cout<<"\ny = "<<y<<endl;
}

int main()
{
integer int3;
integer int1(9,7);            //constructor called implicitly
integer int2=integer(1);   //constructor called explicitly

int3.display();
return 0;
}
