// standard library
#include <iostream>
    using std::cin;
    using std::cout;
    using std::endl;

int main()
{
    // int variable
    // int stands for integer ( keyword )
    // data type followed by an _approved_ name
    int wholeNumber = 10;

    cout << wholeNumber << endl;

    // integer means a whole number
    // the number assigned below is a double NOT an int
    int number = 3.14;
    cout << number  << "\n";

    // ask a user for number
    int askUserNumber;
    cout << "Enter a number between 1- 100: " << endl;
    cin  >> askUserNumber;
    cout << "The number picked was: " << askUserNumber << endl;
    // don't rely on the user to enter in correct information. We will go over 
    // loops soon

    // comment
    /* comment block example*/ 
    
    // another int variable to show you the comment block works correctly
    int anotherInt = 0;
    cout << "There is a " << anotherInt << " assigned to anotherInt" << endl;

    return 0;
}