// fileCreatorWriter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

void main() {
	const char *path = "D:\\Users\\Sergei\\Documents\\VisualStudioProjects\\C++\\fileCreatorWriter\\fileStorage\\newFile.txt";
	
	ofstream file(path);

	// Inputable text
	cout << "Input your text here: ";
	string writableText;
	cin >> writableText;

	// Adding text to a file
	string data(writableText);
	file << data;
	cout << "File with text was created!";
}

