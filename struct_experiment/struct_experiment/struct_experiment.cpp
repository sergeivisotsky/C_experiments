// struct_experiment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Human
{
	string name;
	int age;
};

void main()
{
	Human* human = new Human();
	
	human->name = "John";
	human->age = 25;
	cout << human->name << endl;
	cout << human->age << endl;

	delete(human);
}

