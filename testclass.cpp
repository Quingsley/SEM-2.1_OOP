//UNIQUE NUMBERS
#include <iostream>
using namespace std;

class Unique
{
private:
	int num, count, i, unique[5];

public:
	Unique();
	void display_Unique();
	void entry_of_numbers();
};
void Unique::entry_of_numbers()
{
	cout << "Enter a value: " << endl;
	cin >> num;
}
Unique::Unique()
{
	count = 0;
	while (count < 5)
	{
		entry_of_numbers();
		for (i = 0; i < count; i++)
		{
			if (num == unique[i])
			{
				//checks if number is already in array
				cout << "Number already exists" << endl;
				break;
			}
		}
		//place numbers in array
		if (i == count)
		{
			unique[count] = num;
			count++;
		}
	}
}
void Unique::display_Unique()
{
	cout << "The unique numbers are: " << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << unique[j] << endl;
	}
}
int main()
{
	Unique number;
	number.display_Unique();
	return 0;
}
