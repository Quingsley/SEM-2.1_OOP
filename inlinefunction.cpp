//Inline functions with a class
#include <iostream>
using namespace std;

class operation
{
    int a,add,sub,mul;
    float b,div;
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};

inline void operation :: get()
{
    cout << "Enter first value:" << endl;
    cin >> a;
    cout << "Enter second value:" << endl;
    cin >> b;
}
  
inline void operation :: sum()
{
    add = a+b;
    cout << "Addition of two numbers: " << a+b << "\n";
}
  
inline void operation :: difference()
{
    sub = a-b;
    cout << "Difference of two numbers: " << a-b << "\n";
}
  
inline void operation :: product()
{
    mul = a*b;
    cout << "Product of two numbers: " << a*b << "\n";
}
  
inline void operation ::division()
{
    div=a/b;
    cout<<"Division of two numbers: "<<a/b<<"\n" ;
}
  
int main()
{
    cout << "Program using inline function\n";
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}
