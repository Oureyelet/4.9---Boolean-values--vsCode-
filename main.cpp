#include <iostream>
#include "first.h"

using namespace std;

int main()
{
    welcome_message();

    bool b;
    bool b1 { true };
    bool b2 { false };
    b1 = false;
    bool b3 {}; // default initialize to false

    bool c1 { !true }; //c1 will be initialized with the value false
    //because the logical NOT operator (!) can be used to flip
    //a Boolean value from true to false, or false to true.
    bool c2 { !false }; //c2 will be initialized with the
    //value true.

    /*
    When we print Boolean values with std::cout,
    std::cout prints 0 for false, and 1 for true:
    */

   cout << true << '\n'; //true evaluates to 1
   cout << !true << '\n'; //!true evaluates to 0

    bool d { false };
    cout << d << '\n'; //d is false, which evaluates to 0
    cout << !d << '\n' << endl; //!d is true, which evaluates to 1

    /*
    If you want std::cout to print “true” or “false” 
    instead of 0 or 1, you can use std::boolalpha. 
    Here’s an example:
    */

    cout << true << '\n';
    cout << false << '\n';

    cout << boolalpha; //print bools as true or false

    cout << true << '\n';
    cout << false << '\n' << endl;

    //You can use std::noboolalpha to turn it back off.

    /*

    Integer to Boolean conversion
    You can’t initialize a Boolean with an 
    integer using uniform initialization:
    
    bool e{ 4 }; // error: narrowing conversion disallowed
    cout << e << '\n' << endl;

    */

   bool bb1 = 4; //copy initialization allows implicit conversion
   //from int to bool
   cout << bb1 << '\n';

   bool bb2 = 0;
   cout << bb2 << '\n' << endl;

    /*
    Inputting Boolean values
    */

    bool er{}; //default initialize to false
    cout << "Enter a boolean value: ";
    cin >> er;
    cout << noboolalpha << "You entered: " << er << '\n' << endl;
    


    /*
    Boolean return values
    */
    cout << "Enter an integer: ";
    int xx1{};
    cin >> xx1;

    cout << "Enter another integer: ";
    int yy3{};
    cin >> yy3;

    cout << boolalpha;
    //print bools as true or false

    cout << xx1 << " and " << yy3 << " are equal? ";
    cout << isEqual(xx1, yy3) << '\n' << endl;
    //will return true or false

    return 0;
}