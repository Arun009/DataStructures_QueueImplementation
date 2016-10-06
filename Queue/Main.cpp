#include <iostream>
#include "QueueArray.h"
#include "QueueLinkedList.h"
using namespace std;

void arrayImplementation();
void linkedListImplementation();

int main()
{
	int mainMenuChoice = 0;
	while (1) {
		cout << "MAIN MENU" << endl;
		cout << "=========" << endl;
		cout << "1. Queue Implementation using Arrays" << endl;
		cout << "2. Queue Implementation using Linked Lists" << endl;
		cout << "3. Exit." << endl;
		cout << "Enter a choice :" << endl;
		cin >> mainMenuChoice;
		if (mainMenuChoice > 3 || mainMenuChoice < 1)
			cout << "Invalid Choice" << endl;
		switch (mainMenuChoice)
		{
		case 1:
			arrayImplementation();
			break;

		case 2:
			//linkedListImplementation();
			break;

		case 3:
			exit(0);
		}
	}
	getchar();
	return 0;
}

void arrayImplementation()
{
	int size = 0;

	cout << endl << "Queue Implementation using Array" << endl;
	cout << "--------------------------------" << endl;
enterSize: // goto identifier for entering size
	cout << "Enter the size of Queue" << endl;
	cin >> size;
	if (size <= 0) {
		cout << "Size should be greater than zero" << endl;
		goto enterSize;
	}

	QueueArray queue(size);

	int choice = -1;
	do
	{
		cout << endl << "1. Push Value into Queue." << endl;
		cout << "2. Pop Value from Queue." << endl;
		cout << "3. Peek Top from Queue." << endl;
		cout << "4. Check Queue isEmpty." << endl;
		cout << "5. Display Queue" << endl;
		cout << "6. Main Menu" << endl;
		cout << "7. Exit." << endl;
		cout << "Enter a choice :";
		cin >> choice;
		if (choice > 7 || choice < 1)
			cout << "Invalid Choice" << endl;

		switch (choice)
		{
		case 1:
			int value;
			cout << endl << "Enter the value to be pushed into Queue" << endl;
			cin >> value;
			queue.enqueue(value);
			break;

		case 2:
			if (queue.isEmpty())
				cout << "Queue is empty" << endl;
			else {
				int deletedValue = queue.dequeue();
				cout << deletedValue << " deleted from the queue" << endl;
			}
			break;

		case 3:
			if (!queue.isEmpty())
				cout << queue.peek() << endl;
			else
				cout << "Queue is empty" << endl;
			system("pause");
			break;

		case 4:
			if (queue.isEmpty())
				cout << "Queue is empty" << endl;
			else
				cout << "Queue is not empty" << endl;
			system("pause");
			break;

		case 5:
			queue.display();
			break;

		case 6:
			cout << endl;
			break;

		case 7:
			exit(0);
		}
	} while (choice != 6);
}