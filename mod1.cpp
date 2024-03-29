/*
 * mod1.cpp
 *
 *  Created on: 25 Feb 2024
 *      Author: SRButters
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName, streetAddress, city, zipCode;

    cout << "Enter First Name: ";
    getline(cin, firstName);

    cout << "Enter Last Name: ";
    getline(cin, lastName);

    cout << "Enter Street Address: ";
    getline(cin, streetAddress);

    cout << "Enter City: ";
    getline(cin, city);

    cout << "Enter Zip Code: ";
    getline(cin, zipCode);

    cout << "\nPersonal Information:\n";
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}



