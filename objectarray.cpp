#include <iostream>
using namespace std;
class book
{
    private:
        string name;
        int code;
        float prize;
    public:
        void getdata();
        book();
        void display();
};
book :: book()
{
        name="No name";
        code=0;
        prize=0.0;
}
void book :: getdata()
{
    cout << "Enter book name: " << endl;
    cin >> name;
    cout << "Enter code: " << endl;
    cin >> code;
    cout << "Enter prize: " << endl;
    cin >> prize;
}
void book :: display()
{
    cout << "BOOK DETAILS\n" << endl;
    cout <<"NAME\tCODE\tPRIZE\n";
    cout << name << "\t" << code << "\t" << prize << endl;
    cout << " " << endl;
}
int main()
{
    
    book bk1[2];
    for(int i=0;i<2;i++)
        {
            bk1[i].getdata();
        }
    for(int i=0;i<2;i++)
        {
            bk1[i].display();
        }
    return 0;
}
