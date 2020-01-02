//Sabrina Turney
//May 29, 2019
//COP 2228 - C++
//Assignment 2 - Pointer.cpp
//This program uses only pointers and the strlen() function to allow a string to be printed forward, backward, and forward again.
//It is possible with any string input into the Name variable.

#include "pch.h"   //included for VS 2019
#include <iostream>  //included for cout - No cin this time, since we're not asking for inputs.
#include <cstring>   //included for strlen().
#include "Pointer.h"

using namespace std;


int main()
{

	const char *Name = "John Doe"; //Our pointer is given "Name" variable and uses it to point to a C-string.
	int Length = strlen(Name); //Here we get the length of the C-string and store in "Length". Here is where strlen() is used.



	cout << Name << endl;      //First part of the program requires the string to be printed out.



	while (Length >= 0)       //Using a while statement here to loop through the pointer.
	{
		cout << *(Name + --Length); //Pointer moves negatively through the string and prints each character. 
	}



	cout << "\n" << Name << endl; //The program then prints out the original Name variable again, which is not changed.


	cout << "\n-------------------------------------------------";
	return 0;                  //Returning 0 to finish program.
}
