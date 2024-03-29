/*
 * mod2.cpp
 *
 *  Created on: 25 Feb 2024
 *      Author: SRButters
 */

#include<iostream>
#include<string>

using namespace std;

int main (){
	for (int i = 0; i < 3; ++i) {
 string str1, str2;

 cout << "Enter string 1:";
 getline(cin, str1);

 cout << "Enter string 2:";
  getline(cin, str2);

  string concatenatedString = str1 + " " +  str2;

  cout <<"Concatenated String: " << concatenatedString << endl << endl;

	}
	return 0;
}


