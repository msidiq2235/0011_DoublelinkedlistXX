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
}