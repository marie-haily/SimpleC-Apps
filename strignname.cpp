#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//variables
	string name; 
	
	//ask user for name and accept name with space
	cout << "What's your name? : ";
	getline(cin,name);
	
	//capitalize the name
	cout << "Hello, " << name << "!";
	name[0]=toupper(name[0]);
	cout << endl << endl;
	// get three names and ages
	string n1,n2,n3;
	int a1,a2,a3;

cout<< "Name: ";
cin>> n1;
n1[0]= toupper(n1[0]);
cout << "Age: ";	
cin>> a1;

cout<< "Name: ";
cin>> n2;
n2[0]= toupper(n2[0]);

cout << "Age: ";	
cin>> a2;

cout<< "Name: ";
cin>> n3;
n3[0]= toupper(n3[0]);
cout << "Age: ";	
cin>> a3;
	//output names with heading anf format
cout << "Name     Age" << endl << left << setw(9) << n1 << " "<< a1 << endl << left << setw(9) << n2 << " " << a2 << endl << left << setw(9) << n3 << " " << a3 << endl;
	cout << endl <<endl;
	system("pause");
	return 0;
}