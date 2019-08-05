#include <iostream>

using namespace std;

int main()
{
	int num, remainder;
	int sum = 0;
	
	cout << "Enter a number";
	cin >> num;
	
	while(num != 0)
	{
		remainder = num % 10;
		
		sum = sum + remainder;
		
		num  = num / 10;
		
	}
	cout << "Sum of entered number is = " << sum << endl;
	
	return 0;
}
