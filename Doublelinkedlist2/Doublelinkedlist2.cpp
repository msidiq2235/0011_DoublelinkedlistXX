include <iostream>
using namespace std;

bool search(int rollNo, Node** previous, Nodde** current)

{
	*previous = NULL;
	*current = START;
	while (*current != NULL && (*current)->noMhs != rollNo)
	{
		*previous = *current;
		*current = (*current)->next;
	}
}

void deleteNode()
{
	Node* previous, * current; //
	int rollNo;

	cout << "\nEnter the roll number of the student whose record is to be deleted: ";
	cin >> rollNo;

	if (START == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}

	current = START;
	previous = NULL;

	while (current != NULL && current->noMhs != rollNo)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
	{
		cout << "\033[31mThe record with roll number " << rollNo << " not found\033[0m" << endl;
	}

	if (current == START)
	{
		START = START->next;
		if (START != NULL)
		{
			START->prev = NULL;
		}
	}
	else
	{
		previous->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = previous;
		}
	}

	delete current;
	cout << "\x1b[32mRecord with roll number " << rollNo << "deleted\x1b[0m" << endl;
}

bool listEmpty()
{
	return (START == NULL);
}