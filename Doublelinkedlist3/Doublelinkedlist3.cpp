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