/*A program is required to initialize, display and arrange the elements of the array in ascending order. 
Write a class oriented program to implement the process */

//array sort
#include<iostream>
#include<conio.h>
using namespace std;

class sorting
{
private:
    int age[5],i,temp,j;
public:
    void getdata();
    void sort();
    void display();
};

void sorting :: getdata()
{
    cout<<"\ninitialize the array\n";
    for(i=0;i<5;i++)
    {
        cin>>age[i];
    }
}

void sorting :: sort()
{
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(age[i]>age[j])
            {
                temp=age[i];
                age[i]=age[j];
                age[j]=temp;
            }
        }
    }
}

void sorting :: display()
{
    cout<<"\nsorted elements are\n";
    for(i=0;i<5;i++)
        cout<<age[i]<<endl;
}

int main()
{
    sorting sr;
    sr.getdata();
    sr.sort();
    sr.display();
    return 0;
}
