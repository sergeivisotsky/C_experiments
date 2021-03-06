// bst_postorder.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

struct Node {
	int data;
	struct Node *left;
	struct Node *right;

	Node(int _data) {
		data = _data;
		left = nullptr;
		right = nullptr;
	};
	Node() = default;
};

class binary_search_tree {
private:
	struct Node root;
	int size;
	int max_size;

	Node insertWrapper(struct Node* node, int element) {
		if (node == nullptr)
		{
			return { element };
		}

		struct Node *newSubtree = nullptr;
		if (element < node->data)
		{
			*newSubtree = insertWrapper(node->left, element);
			node->left = newSubtree;
			return *node;
		}
		else if (element > node->data)
		{
			*newSubtree = insertWrapper(node->right, element);
			node->right = newSubtree;
			return *node;
		}

		return *node;
		delete node;
	}

public:
	binary_search_tree(int _max_size) : max_size(_max_size) {};
	binary_search_tree() = default;

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return size == 0;
	}

	bool isFull() {
		return size == max_size;
	}

	void insert(int element) {
		root = insertWrapper(&root, element);
		size++;
	}



	~binary_search_tree()
	{

	}
};



class MainClass
{
private:
	bool tree_created = false;
	void tree_is_not_created() {
		if (!tree_created)
		{
			cout << "Tree is not created!" << endl;
		}
	}
public:
	MainClass() = default;
	void main()
	{
		int answer, element;
		char yes_no_answer;

		try
		{
			int tree_size;
			cout << "Tree size (max 15): ";
			cin >> tree_size;

			if (tree_size > 15)
			{
				throw new
					runtime_error("List size should not be greater that 15!");
			}

			binary_search_tree bst(tree_size);

			do
			{
				cout << "1: Add element" << endl;
				cout << "2: Show treee(Postorderal traversal)" << endl;
				cout << "3: Vertices with two children" << endl;
				cout << "Node with even element quantity" << endl;
				cout << "Choose answer: ";
				cin >> answer;
				switch (answer)
				{
				case 1:
					if (!bst.isFull())
					{
						cout << "Add element: ";
						cin >> element;
						bst.insert(element);
					}
					else
					{
						cout << "Tree is full!" << endl;
					}
					tree_created = true;
					break;
				case 2:
					tree_is_not_created();
					break;
				case 3:
					tree_is_not_created();
					break;
				case 4:
					tree_is_not_created();
					break;
				default:
					throw new runtime_error("Invalid answer!");
				}

				cout << "Constinue? (y/n) ";
				cin >> yes_no_answer;
			} while (yes_no_answer == 'y' || yes_no_answer == 'Y');
		}
		catch (const std::exception&)
		{
			cout << "Invalid data format!" << endl;
		}
	}
};