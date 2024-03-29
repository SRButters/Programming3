/*
 * mod5.cpp
 *
 *  Created on: 24 Mar 2024
 *      Author: SRButters
 */

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void appendToFile(const string& filename, const string& data) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << data << endl;
        file.close();
        cout << "Data appended to file." << endl;
    } else {
        cerr << "Unable to open file for appending." << endl;
    }
}

void reverseFileContent(const string& inputFilename, const string& outputFilename) {
    ifstream inputFile(inputFilename);
    string content;
    if (inputFile.is_open()) {
        getline(inputFile, content, '\0');
        inputFile.close();

        reverse(content.begin(), content.end());

        ofstream outputFile(outputFilename);
        if (outputFile.is_open()) {
            outputFile << content;
            outputFile.close();
            cout << "Reversed file stored in '" << outputFilename << "'." << endl;
        } else {
            cerr << "Unable to open output file." << endl;
        }
    } else {
        cerr << "Unable to open input file." << endl;
    }
}

int main() {
    string userInput;
    cout << "Enter data to append to file: ";
    getline(cin, userInput);

    string filename = "C:\\Users\\SRButters\\Desktop\\CSC450_CT5_mod5.txt";
    string reverseFilename = "C:\\Users\\SRButters\\Desktop\\CSC450-mod5-reverse.txt";

    appendToFile(filename, userInput);
    reverseFileContent(filename, reverseFilename);

    return 0;
}
