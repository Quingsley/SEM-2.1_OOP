#include <bits/stdc++.h>
using namespace std;
class Dog
{
    //access specifier
    public:
    //Data members
        string Dogname;
        string Breed;
        string Color;
        string Gender;
        string Weight;
        //member function()
        void printdetails();
        void getdata();
       
};
void Dog::printdetails()
{
    cout << "\nDog Breed   " << Breed;
    cout << "\nDog color   " <<  Color;
    cout << "\nDog Gender  " << Gender;
    cout << "\nDog Weight  " <<  Weight;
   
}
int main()
{
    Dog object1; //declare an object of class geeks
    char name[50];
    char Dogname[50];
    char Breed[50];
    char Color[50];
    char Gender[50];
    char Weight[50];

    cout << "Please enter the details: ";
    cout << "name: ";
    cin.getline(name, 50); 

    cout << "Breed: ";
    cin.getline(Breed, 50);

    cout << "Color: ";
    cin.getline(Color, 50);

    cout << "Gender: ";
    cin.getline(Gender, 50);

    cout << "Weight: ";
    cin.getline(Weight, 50);

    object1.Dogname = name;
    object1.Breed = Breed;
    object1.Color= Color;
    object1.Gender = Gender;
    object1.Weight = Weight;
    
    
    object1.printdetails();

    return 0;


}