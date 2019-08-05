#include <iostream>

using namespace std;

int main(){
	int age;
	
	cout << "How old are you?\n";
	cin >> age;

	if(age <= 17){
		cout <<"You are not eligible to vote in a many of the world's countries, wait a couple of years." << endl;
	}

	if(age <= 21){
		cout <<"You cannot consume alcohol, you are young." << endl;
	}
	else if(age >= 21){
		cout <<"You can indulge in alcohol" << endl;
	}

	if(age >= 16){
		cout <<"You are eligible to begin driving." << endl;
	}

	if(age >= 65){
		cout << "You are now retired and probably earning pension." << endl;
	}
	
	return 0;
}
