#include <iostream> 
#include <iomanip>
using namespace std; 

int main()
{
	//Store them in five variables (get num1-5 by cin command)
	int num1, num2, num3, num4, num5;

	//Get five numbers from the user
	cout << "Please think of five numbers, and type them in the provided area. " << endl;

	//Ask for the numbers separately
	cout << "First Number: " << endl;
	cin >> num1;
	cout << "Second Number: " << endl;
	cin >> num2;
	cout << "Third Number: " << endl;
	cin >> num3;
	cout << "Fourth Number: " << endl;
	cin >> num4;
	cout << "Fifth Number: " << endl;
	cin >> num5;
	 
	//Recite them back 
	cout << "Your chosen numbers are " << num1 << ", " << num2 << ", " << num3 << ", " 
	<< num4 <<", " << num5 << ". Thank you for your participation!";

	cout << endl << endl;
	system("pause");
	return 1;
}