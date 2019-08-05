#include <iostream>

using namespace std;

int main()

{
	float Area, circumference;
	int r;
	const double pi = 3.143;
	
	cout << "Enter the radius" << endl;
	cin >> r;
	
	Area = pi * r * r;
	cout << "The Area of the circle is " << Area << endl;
	
	circumference = 2 * pi * r;
	cout << "The circumference of the circle is " << circumference << endl;
	
	return 0;
	
}
