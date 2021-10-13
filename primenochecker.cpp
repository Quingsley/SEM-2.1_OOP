 /*PRIME NUMBER CHECK PROGRAM*/
#include<iostream>
#include<conio.h>

class prime
{
private:
	int n, i, flag;
public:
	void getdata();
	void checkprime();
};

void prime :: getdata()
{
  std::cout<<"\nenter an integer number\n";
  std::cin>> n;
}

void prime :: checkprime()
{
  flag=0;
  for(i=2;i*i<= n/2; i++)
    {
	if(n%i==0)
    {
	std::cout<<"\nNumber is not prime\n";
	flag=1;
	break;
    }
}

if(flag==0)
    std::cout<<"\nNumber is prime\n";
}


int main()
{
prime pr;
pr.getdata();
pr.checkprime();
return 0;
}
