// Now we will talk about variables, variables are important because they can store values. The variable could be a: string, number, boolean, or other C++ data types. An example of a variable would be:
/* int myNumber = 10; double pi = 3.14;
   char myLetter = 'A';
   bool isTrue = true;
   std::string myName = "John"; 
*/

// If you really want to use a variable then you would use 
#include <iostream>
#include <string> // Required to use std::string

int main() {
    // 1. Integers and Decimals
    int myNumber = 10; 
    double pi = 3.14;

    // 2. Characters (Single quotes)
    char myLetter = 'A';

    // 3. Booleans (True/False)
    bool isTrue = true;

    // 4. Strings (Double quotes)
    std::string myName = "John";

    // Let's actually see the output!
    std::cout << myName << " says pi is " << pi << std::endl;

    return 0;
}