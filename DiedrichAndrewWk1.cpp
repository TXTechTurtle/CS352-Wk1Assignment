/*
Andrew Diedrich
CS352 Data Structures
Week 1 Programming Assignment
*/

//#include "stdafx.h"			//needed for Microsoft Visual Studio to precompile (remove if using g++ in Linux)
#include <iostream>
#include <string>
using namespace std;

void inputData(string &myVal)								//This function receives the User Input Name
{
	string lastName = myVal.substr(0, myVal.find(","));		//Finds the last name (up until the comma) and assigns it
	myVal.erase(0, myVal.find(",") + 2);					//Erases the last name
	string firstName = myVal.substr(0, myVal.find(" "));	//Finds the first name and assigns it
	myVal.erase(0, myVal.find(" ") + 1);					//Erases the middle name
	string middleName = myVal;								//Assigns remaining string to middle name

	myVal = firstName + " " + middleName + " " + lastName;	//Concats all strings in order with spacing

} //end inputData

void outputData(string value)								//This function receives the finished string and outputs it
{
	cout << value << endl;
	//system("PAUSE");					//nasty call to Windows to run the "pause" program
} //end outputData

int main()
{
	string myName;
	cout << "Please input your name (Last, First MI): ";						//Request for name
	getline(cin, myName);									//Retrieves entire line of user input
	inputData(myName);										//Calls inputData function
	outputData(myName);										//Calls outputData function
	return 0;
} //end main