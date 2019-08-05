#include <iostream>

using namespace std;

int main()
{
	// first create an array of five float numbers.
	
	float num[5];
	
	// assign values to the num array
	
	num[0] = 0.45f;
	num[1] = 4.67f;
	num[2] = 56.98f;
	num[3] = 345.23f;
	num[4] = 21.4f;
	
	// iterate the values 
	
	cout <<"num[0] == "<< num[0] << "\n";
	cout <<"num[1] == "<< num[1] << "\n";
	cout <<"num[2] == "<< num[2] << "\n";
	cout <<"num[3] == "<< num[3] << "\n";
	cout <<"num[4] == "<< num[4] << "\n";
	
	return 0;
}
