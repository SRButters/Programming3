/*
 * mod3.cpp
 *
 *  Created on: 10 Mar 2024
 *      Author: SRButters
 */
#include <iostream>

int main() {
	int val1, val2, val3;

	std::cout << "Please enter 3 integer values:\n";
	std::cin >> val1 >> val2 >> val3;

	int *ptr1 = new int;
	int *ptr2 = new int;
	int *ptr3 = new int;

	*ptr1 = val1;
	*ptr2 = val2;
	*ptr3 = val3;

	std::cout << "\nContents of variables: \n";
	std::cout << "1: " << val1 << std::endl;
	std::cout << "2: " << val2 << std::endl;
	std::cout << "3: " << val3 << std::endl;

	std::cout << "\nContents of pointers: \n";
	std::cout << "ptr1: " << *ptr1 << std::endl;
	std::cout << "ptr2: " << *ptr2 << std::endl;
	std::cout << "ptr3: " << *ptr3 << std::endl;

	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;

}



