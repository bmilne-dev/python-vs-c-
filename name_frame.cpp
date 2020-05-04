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
    const string greeting = "Hello, " + name + "!";

    // build the second and fourth lines of the output
    const string spaces(greeting.size(), ' ');
    const string second = "* " + spaces + " *";

    // build the first and fifth lines of the output
    const string first(second.size(), '*');

    // write it all
    cout << endl;
    cout << first << endl;
    cout << second << endl;
    cout << "* " << greeting << " *" << endl;
    cout << second << endl;
    cout << first << endl;
    
    return 0;
}

