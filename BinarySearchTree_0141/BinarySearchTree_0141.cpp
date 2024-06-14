#include <iostream>
#include <string>
using namespace std;

class Node
{
public :
	string info;
	Node* leftchild;
	Node* rightchild;

	//Constructor for the Node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public :
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL; //Initializing ROOT to NULL
	}

	void insert(string element) //Insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL); //Allocate memory for the new node
		newNode->info = element; //Assign value to the data field 
		newNode->leftchild = NULL; //leftchild dari newnode menunjuk ke NULL
		newNode->rightchild = NULL; //rightchild dari newnode menunjuk ke NULL

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode); // Locate the node which will be the parent of the node to be inserted

		if (parent == NULL) // Jika Parent = NULL (Tree Kosong)
		{
			ROOT = newNode; //Tandai newnode sebagai ROOT
			return; // EXIT
		}

		if (element < parent->info) //If the value in the data field of the new node is less than that of the parent
		{
			parent->leftchild = newNode; //Make the left child of the parent point to the new node
		}
		else if (element > parent->info) // If the calue in the data field off the new node is greater that that of the parent
		{
			parent->rightchild = newNode; // Make the right child of the parent point to the new node
		}
	}

	
};