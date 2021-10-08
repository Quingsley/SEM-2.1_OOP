//STUDENT MARK'S
#include <iostream>
#include <conio.h>
using namespace std;
class student
{
    private:
        string name,Grade;
        int marks;
    public:
        void getname();
        int marks_input();
        int check_marks();
        int display();
        
};
void student :: getname()
{
    cout << "Enter name of student: " << endl;
    getline(cin, name);
}
int student :: marks_input()
{
    cout << "Enter marks of student: " << endl;
    cin >> marks;
    return marks;
}
int student :: check_marks()
{
    if(marks<0)
        {
            cout << "INVALID MARKS";
        }
    else if(marks<=39)
        {
            cout << "Grade=E, FAIL";
        }
    else if(marks<=49)
        {
            cout << "Grade=D";
        }
    else if(marks<=59)
        {
            cout << "Grade=C"; 
        }
    else if(marks<=69)
        {
            cout << "Grade=B";
        }
    else if(marks<=100)
        {
            cout << "Grade=A"; 
        }
    else
        {
            cout << "MARKS BEYOND RANGE";
        }
    return 0;
}
int student :: display()
{
    cout  <<"\n" << endl;
    cout << "STUDENT NAME   MARKS  GRADE\n";
    cout << name << "    ";
    cout << marks << "    ";
    Grade=check_marks();
    return 0;
}
int main()
{
    student std1;
    std1.getname();
    std1.marks_input();
    std1.display();
    return 0;
}