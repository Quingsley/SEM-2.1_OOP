//PRIME NUMBERS
#include <iostream>
#include <conio.h>
using namespace std;
class prime
{
    private:
        int n,i,flag;
    public:
        void get_prime_numbers();
};
void prime :: get_prime_numbers()
{
     for(n=2;n<=100;n++)
        {
           flag=1; //TRUE
          for(i=2;i*i<=n;i++)
                {
                    if(n%i==0)
                        {
                            flag=0; //FALSE
                            break;
                        }
                }
            if(flag)
                {
                    cout << n << ", ";
                }
         }
}
int main()
{
    prime numbers;
    numbers.get_prime_numbers();
         
    return 0;
}