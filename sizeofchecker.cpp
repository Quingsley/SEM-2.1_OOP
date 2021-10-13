//sizes of data types
#include<iostream>
#include<conio.h>
class datatypes
{
private:

public:
   void show();
};

void datatypes :: show()
{
	std::cout<<"\nsize of integer = "<<sizeof(int);
	std::cout<<"\nsize of float = "<<sizeof(float);
	std::cout<<"\nsize of double = "<<sizeof(double);
	std::cout<<"\nsize of character = "<<sizeof(char);
}

int main()
{

datatypes dat;
dat.show();
return 0;
}
