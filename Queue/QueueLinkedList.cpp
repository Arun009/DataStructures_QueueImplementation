#include "QueueLinkedList.h"
#include <iostream>
using namespace std;


QueueLinkedList::QueueLinkedList()		// Initialize front and rear to nullptr
{
	front = nullptr;
	rear = nullptr;
}


QueueLinkedList::~QueueLinkedList()
{
}

void QueueLinkedList::enqueue(int data)
{
	node *newNode = new node();			// Create a new node
	newNode->data = data;				// Set the data of the node to the value entered during run time
	newNode->next = nullptr;			// Set the next of the node to nullptr (we insert data to the rear always)
	if (front == nullptr) {				// If the queue is empty
		front = rear = newNode;			// Set the front and rear to point to the new node
	}
	else {								// If not empty
		rear->next = newNode;			// Set the next of rear node to the new node
		rear = newNode;					// Set the new node as rear
	}
}

int QueueLinkedList::dequeue()
{
	node *deleteNode = front;			// Set deleteNode to point to the front 
	int deletedValue = front->data;		// Get the value to be deleted from data in front node
	front = front->next;				// Set the front to the node pointed by next
	delete deleteNode;					// Delete the deleteNode
	return deletedValue;				// Return the deleted value
}

int QueueLinkedList::peek()
{
	return front->data;					// Get the value stored in the front node
}

bool QueueLinkedList::isEmpty()
{
	if (front == nullptr)				// front = nullptr means Queue is empty
		return true;
	else
		return false;
}

void QueueLinkedList::display() {
	if (front == nullptr)
		cout << "Queue is empty" << endl;
	else {
		cout << endl;
		node *tempNode = front;
		while (tempNode != nullptr) {
			cout << tempNode->data << endl;
			tempNode = tempNode->next;
		}
	}
}

void QueueLinkedList::destroy()
{
	while (front != nullptr) {			// Loop through the nodes until front becomes nullptr
		node *deleteNode = front;		// Set the deleteNode to point to the front
		front = front->next;			// Set front to point to the node pointed by next
		delete deleteNode;				// Delete the deleteNode
	}
	rear = nullptr;						// Finally set rear also to be nullptr as all the elements are deleted
}
