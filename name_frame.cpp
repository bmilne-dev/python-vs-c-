// a more elaborate greeting
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;

    // build the message that wwe intend to write
    string greeting = "Hello, " + name + "!";

    // build the second and fourth lines of the output
    string spaces(greeting.size(), ' ');
    string second = "* " + spaces + " *";

    // build the first and fifth lines of the output
    string first(second.size(), '*');

    // write it all
    cout << endl;
    cout << first << endl;
    cout << second << endl;
    cout << "* " << greeting << " *" << endl;
    cout << second << endl;
    cout << first << endl;
    
    return 0;
}

