#include "stdafx.h"
#include <iostream>

using namespace std;

struct structure
{
	int a = 90;
	int b = 10;
} my_struct;

int main() {
	cout << my_struct.a << endl;
	return 0;
}

