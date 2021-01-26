#include <iostream>
#include <algorithm>

using namespace std;

int getnum()
{
	int number;
	cout << "Please enter a number: ";
	cin >> number;
	return number;
}

int main()
{
	int uservalue;
	int count = 1;
	int result;
	uservalue = getnum();

	if (uservalue % 2 == 0)
		while (count <=20)
		{
			result = count * uservalue;
			cout << count << "x" << uservalue << "=" << result << "\n";
			count++;
		}
	else if (uservalue % 2 == 1)
		cout << "These numbers are not divisible by the number you entered: " ;
		while (count <=30)
		{
			if (count % uservalue !=0)
			cout << count << "\n";
			count++;
		}
}
		         
