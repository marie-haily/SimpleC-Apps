#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//seed random gen
	srand(time(0));
	
	//variables
	int low, up, num1, num2;
	
	//accept two numbers from user
	cout<< "Enter a lower bound number: ";
	cin>> low;
	cout << endl <<endl;
	cout<< "Enter an upper bound number: ";
	cin>> up;
		
	//generate a random number between two numbers
	num1 = rand() % ( up - low + 1 ) + low;
	num2 = rand() % ( up - low + 1 ) + low;
	cout << endl <<endl;
	cout<< "Two random numbers between " << low << " and " << up << " is " << num1 << " and " << num2 << endl << endl;
	
	//sum product and average of numbers
	cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
	cout <<endl <<endl;
	cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
	cout << "The average of " << num1 << " and " << num2 << " is " << num1 + num2 / 2<< endl;
	
	cout << endl <<endl;
	system("pause");
	return 0;
}

