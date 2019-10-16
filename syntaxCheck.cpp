#include "syntaxCheck.h"
#include "GenStack.h"
#include <iostream>
#include <fstream>
#include <string>
#include <fstream>

using namespace std;
/*
syntaxCheck::syntaxCheck()
{
	//constructor
};

syntaxCheck::~syntaxCheck()
{
	//destructor
};

//function to check if file was opened correctly
bool syntaxCheck::openFile(string name)
{
	//reading in a file
	ifstream filename;
	filename.open("text.txt");

	//checking if file is opened or not
	if (filename.is_open())
	{
		cout << "File opened!" << endl;
		filename.close();
		fileName = name;

		return true;
	}
	else
	{
		//error when file is not opened
		cout << "Error! File did not open." << endl;
		return false;
	}
}

//function to check all brackets of file
int syntaxCheck::bracketCheck(string file)
{
	GenStack g(25);

	bool errorfree = true;

	//reading in file
	ifstream infile;
	infile.open("text.txt");
	fileName = file;

	//declaring variables
	int line = 1;
	string text;

	//while loop to read every character in file
	while (getline(infile, text) && errorfree)
	{
		//for loop to read every character 
		for (int i = 0; i < text.size(); i++)
		{
			//if statement to read the first bracket of file
			if ((text[i] == '(') || (text[i] == '[') || (text[i] == '{') || (text[i] == '}') || (text[i] == ']') || (text[i] == ')'))
			{
				//if statements under the first if statement to see if bracket is closed or not
				// - it will pop the elements out of the stack 
				if ((text[i] == '(') && (text[i] == ')'))
				{
					g.pop();
					cout << "Popped a ( )" << endl;
				}
				else if ((text[i] == '[') && (text[i] == ']'))
				{
					g.pop();
					cout << "Popped a [ ]" << endl;
				}
				else if ((text[i] == '{') && (text[i] == '}'))
				{
					g.pop();
					cout << "Popped a { }" << endl;
				}

				// bottom 4 statements print out error message if there are mismatched brackets in .txt file
				else if ((text[i] == '(') && (text[i] == ']' || text[i] == '}'))
				{
					cout << "Error! On line " << line << ", expected a ) instead of " << text[i] << endl;
					errorfree = false;
					return 0; 
				}

				else if ((text[i] == '[') && (text[i] == ')' || text[i] == '}'))
				{
					cout << "Error! On line " << line << ", expected ] instead of " << text[i] << endl;
					return 0;
				}
				else if ((text[i] == '{') && (text[i] == ']' || text[i] == ')'))
				{
					cout << "Error! On line " << line << ", expected } instead of " << text[i] << endl;
					return 0;
				}
				else if ((text[i] == '(') || (text[i] == '[') || (text[i] == '{' || text[i] == ')' || text[i] == ']' || text[i] == '}'))
				{
					g.push(text[i]);
				}
			}
		}
		++line;

		//if the stack is empty, it will print this out
		if (g.isEmpty() == 1)
		{
			cout << "Error! This file is missing a: " << g.peek() << endl;
			return 0;
		}

		//if the stack is not empty, it will go through this
		if (g.isEmpty() == 0)
		{
			//asks the user if they want to check another file
			char answer;
			cout << "No errors have been found! Would you like to read another file? Enter y for yes, n for no: ";
			cin >> answer;

			//lets the user input another file and check to see if the delimiters are correct
			if ((answer == 'Y') || (answer == 'y'))
			{
				cout << "What is the file name? ";
				cin >> file;
				bracketCheck(file);
			}
			else
			{
				errorfree = false;
			}
		}

	}

	return 0;
}*/