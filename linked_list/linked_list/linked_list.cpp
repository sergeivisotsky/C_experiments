// linked_list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;
class LinkedList {
	struct Node
	{
		int data;
		Node *next;
	};

public:
	void insert(int element) {

	}

	void deleteElement(int position) {

	}
};

void main() {
	do
	{
		LinkedList *list = new LinkedList();
		int answer;
		string yes_no_answer;
		cout << "1: insert element" << endl;
		cout << "2: Show list" << endl;
		cout << "3: Delete element with position" << endl;
		cout << "4: isFull?" << endl;
		cout << "5: isEmpty" << endl;
		cout << "6: getSize" << endl;
		cout << "Answer: ";
		cin >> answer;
		switch (answer)
		{
		case 1:
			//list->insert();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			throw new runtime_error("Incorrect answer!");
		}

		cout << "Continue? (y/n) ";
		cin >> yes_no_answer;
	} while (yes_no_answer == "y" || yes_no_answer == "Y");
}
