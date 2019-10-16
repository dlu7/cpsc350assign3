/*
	This program checks to see if the delimiters are closed properly in text files.

	Note: I commented out everything because while it does compile, Docker says that I have a lot of undefined references,
			including some in the main.cpp file. Most of them are in the syntaxCheck.cpp and I couldn't quite figure it out.
*/

#include <iostream>
#include <fstream>
#include <string>
#include "syntaxCheck.h"
#include "GenStack.h"

using namespace std;


int main(int argc, char** argv)
{
	cout << "Hello world" << endl;
	/*syntaxCheck s;
	
	//calls the functions
	string file;
	s.openFile(file);
	s.bracketCheck(file);

	return 0; */
}