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

void searchData()
{
	if (listEmpty() == true)
	{
		cout << "\nList is empty" << endl;
	}
	Node* prev, * curr;
	prev = curr = NULL;
	cout << " \nEnter the roll number of the student whose record you want to search:";
	int num:
	cin >> num;
	if (search(num, &prev, &curr) == false)
		cout << "/nRecord not found" << endl;
	else
	{
		cout << "\nRecord found" << endl;
		cout << "\nRoll number: " << curr->noMhs << endl;
		cout << "\nName: " << curr->name << endl;
	}
}