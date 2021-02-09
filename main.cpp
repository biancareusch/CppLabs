// This program illustrates a problem that can occur if
// cin is used to read character data into a string object.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string last;
    string city;


    cout << "This section of code demonstrates how the user's input can stay in the buffer \nand cause unexpected results.\n" << endl;
    cout << "Please enter your First and Last name separated by a space: " << endl;
    cin >> name;
    cout << "Enter the city you live in: " << endl;
    cin >> city;

    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;

    cout << "\nUsing the cin.ignore() function allows us to ignore unwanted \ncharacters in the buffer." << endl << endl;
    cin.ignore(100, '\n');


    cout << "Using the getline() function allows the user to input spaces in their response: " << endl;
    cout << "Please enter your First and Last name separated by a space: " << endl;
    getline(cin, name);
    cout << "Enter the city you live in: " << endl;
    getline(cin, city);

    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;



    return 0;
}
