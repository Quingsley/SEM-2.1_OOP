//UNIQUE NUMBERS
#include <iostream>
using namespace std;
class Unique
{
	private:	
		int n,count=0,i,unique[5];

	public:
		void entry_of_numbers();
		void display_uniquenumbers();
};
void Unique :: entry_of_numbers()
{
	while(count<5)
	 {
		 cout << "Enter a value: " << endl;
         cin >> n;
        for(i=0;i<count;i++)
         {
            if(n==unique[i]) // Checks if the number is already in the array
             {
                cout << "Number already exist!\n";
                break;
             }
         }
        if(i==count) //number not in array
        	{
          	  unique[count] = n;
              count++;
        	}
	 }
}
void Unique :: display_uniquenumbers()
{
	 cout << "The unique numbers are: " << endl;
     for(int j=0;j<5;j++)
    	{
        	cout << unique[j] << endl;
        }

}
int main()
{
	Unique num;
	num.entry_of_numbers();
	num.display_uniquenumbers();
	return 0;
}

