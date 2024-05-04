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