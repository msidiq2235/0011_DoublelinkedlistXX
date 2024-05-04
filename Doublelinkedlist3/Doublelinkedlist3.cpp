#include <iostream>
using namespace std;

void traverse()
{
	if (listEmpty())
		cout << "\nList is empty" << endl
	else
	{
		cout << "\nRecords in ascending order of roll numer are:" << endl;
		Node* CurrentNode = START;
		while (currentNode != NULL)
		{
			cout << currentNode->noMhs << " " << currentNode->name << endl;
			currentNode = currentNode->next;
		}
	}
}

void revtraverse()
{
	if (listempty())
		cout << "\nList is empty" << endl;
	else
	{
		cout << "\nRecords in descending order of roll number are:" << endl;
		Node* currentNode = START;
		while (currentNode->next != NULL)
			currentNode = currentNode->next;

		while (currentNode != NULL)
		{
			cout << currentNode->noMhs << " " << currentNode->name << endl;
			currentNode = currentNode->prev
		}
	}
}