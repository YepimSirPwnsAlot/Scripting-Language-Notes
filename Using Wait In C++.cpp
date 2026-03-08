// Since you cannot exactly use "wait()" in C++ you have to use std::this_thread::sleep_for(std::chrono:seconds(1));
// For more context you can change the 1 to any number you want, heres a list of what you can change them too: hours, minutes, seconds, miliseconds, microseconds, nanoseconds
// Also if you want to use std::this_thread::sleep_for(std::chrono:seconds(1)); in your script then you use #include <chrono> and #include <thread>, heres an example:
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
	std::cout << "This is an example!";
	std::this_thread::sleep_for(std::chrono::seconds(2)); // Keep in mind you can use miliseconds, seconds, minutes, hours, microseconds and nanoseconds
	std::cout << " Example finished";

	return 0;
}