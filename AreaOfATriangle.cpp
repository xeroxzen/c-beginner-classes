#include <iostream>

using namespace std;

int main()
{
	int base, height;
	double area;
	
	cout << "Enter Base of the Triangle: \n";
	cin >> base;
	
	cout <<"Enter the height of the Triangle: \n";
	cin >> height;
	
	area = 0.5 * base * height;
	
	cout << "The area of the Triangle is = "<< area << endl;
	
	return 0;
}
