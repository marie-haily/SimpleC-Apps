#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // variables
    double s, a, b, c, a2;

    // ask for three side lengths of a triangle
    cout << "Enter three lengths of a triangle in integer form ";
    cout << endl << "Side A: ";
    cin >> a;
    cout << endl << "Side B: "; 
    cin >> b;
    cout << endl << "Side C: ";
    cin >> c;
    cout << "Thank you! I will now calculate the area using Herons formula!" << endl;

    // use Herons formula to calculate the area of the triangle
    cout << "Solving using Heron's formula is quite simple, we just need a value for S to complete it. " << endl;
    cout << a + b + c / 2;
    cin >> s;
    
    cout << "For your equation, the value of S equals: " << s << endl << ". Now that we have this value, we can calculate the area!" << endl;
    cout << "We take the square root of all three individual products of the S value subtracted to sides a, b, and c. ";
    cout << a2 = sqrt (s-a)(s-b)(s-c);
    cout << "The area of your triangle is " << a2; 

    // report back
    cout << endl << endl;
    system("pause");
	return 0;
}