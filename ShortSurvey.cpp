
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//welcome user with screen and message
 cout << "Welcome to Haily Watkins short survey! ";

//promt user to press buttom to untroduce themselves
 system("pause");

//variables
int children;
string name;
string location;
float money;

//promt the user with their name & where they live
cout << "What is your name? Type here: ";
getline(cin, name);
cout << "Nice to meet you, "<< name << "!" << endl;

cout << "What city do you live in? Type here: ";
getline(cin, location);
cout << location << " , must be a great place to be!" << endl;


//number of children in household, and available money with decimal allowance
cout <<"How many children are in your household? Type here: ";
cin >> children;

cout <<"How much available money do you have? Type here: ";
cin >> money; 

cout << endl<< endl;

//greet user by repeating the received information
cout <<"Thank you, "<< name << ", for filling out this survey!" <<endl;
cout << "Your name is "<< name << ". You live in " << location << ". With " << children << " children in your household." <<endl;
cout << "You have $"<< fixed << setprecision(5)<< money << " available funds."<<endl;

//thank user for completing survey and promt them with a goodbye button
cout <<"You have successfully completed this survey, "<< name << ". Thank you, goodbye!"<<endl;
cout <<"Press any button to end program."<<endl;
cout<< endl << endl;


    system("pause");
    return 0;
}

