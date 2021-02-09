// This program illustrates a problem that can occur if
// cin is used to read character data into a string object.
#include <iostream>
#include <string>
#include <iomanip>

void Lab1();

void Lab2();

void Lab3();

void Lab4(char operand, int a, int b);

void isAlphabetic();

void testScores();

void switchMenu();
void firstMenu();

using namespace std;

int main() {
//    Lab1();
//    Lab2();
//    Lab3();
//    Lab4('+', 4, 3);
//    Lab4('-', 34, 56);
//    Lab4('*', 3, 5);
//    Lab4('/', 56, 5);
//    isAlphabetic();

//firstMenu();
switchMenu();
}

void Lab1() {
    string name;
    string last;
    string city;


    cout
            << "This section of code demonstrates how the user's input can stay in the buffer \nand cause unexpected results.\n"
            << endl;
    cout << "Please enter your First and Last name separated by a space: " << endl;
    cin >> name;
    cout << "Enter the city you live in: " << endl;
    cin >> city;

    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;

    cout << "\nUsing the cin.ignore() function allows us to ignore unwanted \ncharacters in the buffer." << endl
         << endl;
    cin.ignore(100, '\n');


    cout << "Using the getline() function allows the user to input spaces in their response: " << endl;
    cout << "Please enter your First and Last name separated by a space: " << endl;
    getline(cin, name);
    cout << "Enter the city you live in: " << endl;
    getline(cin, city);

    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;

}

void Lab2() {
    int r;
    double pi = 3.14;
    cin >> r;

    double area = pi * r * r;
    cout << setprecision(2) << fixed << area;
}

void Lab3() {
    char ch;

    cout << "This program has paused. Press Enter to continue.\n";
    cin.get(ch);
    cout << "It has paused a second time. Please press Enter again.\n";
    ch = cin.get();
    cout << "It has paused a third time. Please press Enter again.\n";
    cin.get();
    cout << "Thank you!";

}

void Lab4(char operand, int a, int b) {
//    char operand;
//    int a,b;
//    cin >> operand;
//    cin >> a;
//    cin >>b;

    float result;
    switch (operand) {
        case '+':
            result = a + b;
            cout << result << endl;
            break;
        case '-':
            result = a - b;
            cout << result << endl;
            break;
        case '*':
            result = a * b;
            cout << fixed << showpoint << setprecision(6) << result << endl;
            break;
        case '/':
            result = a / b;
            cout << fixed << showpoint << setprecision(6) << result << endl;
            break;
    }
}

void isAlphabetic() {
    char input;
    cin >> input;
    if (isalpha(input)) {
        if (isupper(input)) {
            cout << "U";
        } else {
            cout << "L";
        }
    } else {
        cout << "-1";
    }
}

void testScores(){
    // Constants for grade thresholds
    const int A_SCORE = 90,
            B_SCORE = 80,
            C_SCORE = 70,
            D_SCORE = 60;

    int testScore;  // To hold a numeric test score

    // Get the numeric test score.
    cout << "Enter your numeric test score and I will\n"
         << "tell you the letter grade you earned: ";
    cin >> testScore;

    // Determine the letter grade.
    if (testScore >= A_SCORE)
        cout << "Your grade is A.\n";


    if (testScore >= B_SCORE && testScore <= A_SCORE)
        cout << "Your grade is B.\n";


    if (testScore >= C_SCORE && testScore <= B_SCORE)
        cout << "Your grade is C.\n";


    if (testScore >= D_SCORE && testScore <= C_SCORE)
        cout << "Your grade is D.\n";


    if (testScore <= D_SCORE)
        cout << "Your grade is F.\n";

}

void firstMenu(){
    int choice;       // To hold a menu choice
    int months;       // To hold the number of months
    double charges;   // To hold the monthly charges

    // Constants for membership rates
    const double ADULT = 40.0,
            SENIOR = 30.0,
            CHILD = 20.0;

    // Constants for menu choices
    const int ADULT_CHOICE = 1,
            CHILD_CHOICE = 2,
            SENIOR_CHOICE = 3,
            QUIT_CHOICE = 4;

    // Display the menu and get a choice.
    cout << "\t\tHealth Club Membership Menu\n\n";
    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit the Program\n\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Set the numeric ouput formatting.
    cout << fixed << showpoint << setprecision(2);

    // Respond to the user's menu selection.
    if (choice == ADULT_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * ADULT;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == CHILD_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * CHILD;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == SENIOR_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * SENIOR;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == QUIT_CHOICE)
    {
        cout << "Program ending.\n";
    }
    else
    {
        cout << "The valid choices are 1 through 4. Run the\n";
        cout << "program again and select one of those.\n";
    }

}

void switchMenu(){
    int choice;       // To hold a menu choice
    int months;       // To hold the number of months
    double charges;   // To hold the monthly charges

    // Constants for membership rates
    const double ADULT = 40.0,
            SENIOR = 30.0,
            CHILD = 20.0;

    // Constants for menu choices
    const int ADULT_CHOICE = 1,
            CHILD_CHOICE = 2,
            SENIOR_CHOICE = 3,
            QUIT_CHOICE = 4;

    // Display the menu and get a choice.
    cout << "\t\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Citizen Membership\n"
         << "4. Quit the Program\n\n"
         << "Enter your choice: ";
    cin >> choice;

    // Set the numeric ouput formatting.
    cout << fixed << showpoint << setprecision(2);

    // Respond to the user's menu selection.
    switch (choice)
    {
        case ADULT_CHOICE:
            cout << "For how many months? ";
        cin >> months;
        charges = months * ADULT;
        cout << "The total charges are $" << charges << endl;
        break;
        case CHILD_CHOICE:
            cout << "For how many months? ";
        cin >> months;
        charges = months * CHILD;
        cout << "The total charges are $" << charges << endl;
        break;
        case SENIOR_CHOICE:
            cout << "For how many months? ";
        cin >> months;
        charges = months * SENIOR;
        cout << "The total charges are $" << charges << endl;
        break;
        case QUIT_CHOICE:
            cout << "Program ending.\n";
        break;
        default:
            cout << "The valid choices are 1 through 4. Run the\n"
                 << "program again and select one of those.\n";
    }

}

