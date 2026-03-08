// Ok so this first note will break down and help you understand the print for C++.
#include <iostream> // Everytime you start a C++ script you always start with #include <iostream> because iostream is the basic library in C++
using namespace std; // After you are done typing your #include <> part you ALWAYS put using namespace std; after. If not put down then the script will not work leading to an error

int main() { // Third, you always make sure to put int main() {} after puting using namespace std; because this is the designated starting point of your script 
	cout << "Hello, World!"; // In C++, std::cout is your program’s primary way of "talking" back to you. It stands for Character Output. Its main purpose is to send data (text, numbers, or variables) from your code to the standard output device, which is almost always your computer screen or terminal window. 1. How it works std::cout works in tandem with the insertion operator <<. Think of these arrows as a funnel, pushing data from the right side into the output stream on the left. Also You could use cout << "";, std::cout << "" << endl; and std::cout << "";
	return 0; // If finishing every script then you add a return function
}