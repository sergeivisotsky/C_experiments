// pointer_experiment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

void main()
{
	int age = 28;
	int *ptr_age = &age;

	cout << "Change age: ";
	cin >> *ptr_age;
	cout << *ptr_age << endl;
	delete(ptr_age);
}