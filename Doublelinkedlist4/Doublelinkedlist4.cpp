#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		try
		{
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record to the list" << endl;
			cout << "3. View all records in the ascending order of roll numbers" << endl;
			cout << "4. View all record in the descending order of roll numbers " << endl;
			cout << "5. Search for a record in the list" << endl;
			cout << "6. Exit" << endl;
			cout << "\nEnter your choice (1-6): ";
			char ch;
			cin >> ch;

			switch (ch)
			{
			case '1':
				addNode();
				break;
			case '2':
				deleteNode();
				break;
			case '3':
				traverse();
				break;
			case '4':
				revtraverse();
				break;
			case '5':
				searchData();
				break;
			case '6':
				return 0;
			default:
				cout << "\nInvalid option" << endl;
				break;
			}
		}
		catch (exception& e)
		{
			cout << " Check for the values entered." << endl;
		}
	}
}