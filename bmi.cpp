#include <iostream>
using namespace std;

int main(){
	double weight, height, body_mass_index;

	cout<<"Enter your weight in kilogrammes: \n";
	cin >>weight;

	cout<<"Enter your height in metres: \n";
	cin>>height;

	body_mass_index = weight / height;
	cout<<"Your body mass index is "<<body_mass_index<<" \n";

	if((body_mass_index > 18) && (body_mass_index <= 24.9)){
		cout<<"Your weight is normal.";
	}
		else if((body_mass_index >=25) && (body_mass_index <= 29.9)){
			cout<<"You are overweight.";
	}
			else (body_mass_index >= 30){
				cout<<"You are obese. you better get rid of that fat.";
	}

	return 0;
}
