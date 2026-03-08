#include <iostream>

int main() {
    // Infinite loop
    while (true) {
        std::cout << "This loop will run forever unless broken!" << std::endl;
        // You generally need a way to exit the loop, such as a break statement
        // or a return statement under specific conditions.
        // Example:
        /*
        if (some_condition) {
            break; // Exits the loop
        }
        */
    }
    return 0; // This line is never reached in an infinite loop without a break
}