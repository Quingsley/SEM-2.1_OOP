#include<iostream>
#include<conio.h>
using namespace std;

class arrayobjetcs
{

private:
    int code;
    float price;
    char name[10];
public:
    void getdata();
    void display();
};

void arrayobjetcs :: getdata()
{
    cout<<"\nenter the details, name, code and price\n";
    cin>>name>>code>>price;
}

void arrayobjetcs :: display()
{
cout<<name<<"\t"<<code<<"\t"<<price<<"\n";
}

int main()
{
    arrayobjetcs ar[2];

    for(int i=0;i<2;i++)
	ar[i].getdata();
    cout<<"\ngiven details are\n";
    cout<<"NAME\tCODE\tPRICE\n";

    for(int i=0;i<2;i++)
	ar[i].display();
    return 0;
}
