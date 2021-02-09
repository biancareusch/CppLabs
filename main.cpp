// This program illustrates a problem that can occur if
// cin is used to read character data into a string object.
#include <iostream>
#include <string>
#include <iomanip>
void Lab1();
void Lab2();
void Lab3();

using namespace std;

int main()
{
    Lab1();
    Lab2();
    Lab3();
}

void Lab1(){
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

}

void Lab2(){
        int r;
        double pi = 3.14;
        cin >> r;

        double area = pi * r * r;
        cout << setprecision(2) << fixed << area;
}

void Lab3(){
    char ch;

    cout << "This program has paused. Press Enter to continue.\n";
    cin.get(ch);
    cout << "It has paused a second time. Please press Enter again.\n";
    ch = cin.get();
    cout << "It has paused a third time. Please press Enter again.\n";
    cin.get();
    cout << "Thank you!";

}