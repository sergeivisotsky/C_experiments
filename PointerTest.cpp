// PointerTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <string>

using namespace std;

void main()
{
	string name = "Sergei";
	string *ptr_name = &name;

	cout << "Change name: " << endl;
	cin >> *ptr_name;
	cout << *ptr_name << endl;
}

