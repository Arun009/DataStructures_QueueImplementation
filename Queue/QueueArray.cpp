#include "QueueArray.h"
#include <iostream>
using namespace std;


QueueArray::QueueArray(int size)	// Initialize the array
{
	this->size = size;				// Set the size attribute of the class to the size entered during run time
	front = 0;						// front is set to 0
	rear = -1;						// rear is set to -1
	queue = new int[size];			// dynamically creates an array of specified size
}


QueueArray::~QueueArray()			// Destructor
{
	delete[] queue;					// Deletes the queue
}

void QueueArray::enqueue(int value)
{
	if (rear == size - 1) {			// Check if queue is full
		cout << "Queue is full: Cannot add new values" << endl;
		system("pause");
	}
	else if (rear == -1) {			// If not full, check if this is the 1st element to be inserted into the queue
		rear++;						// Increment rear
		queue[rear] = value;		// Set the value at rear position in the queue(0 in this case)
	}
	else {							// Queue already contains values
		rear++;						// Increment rear
		queue[rear] = value;		// Set the value at rear position in the queue
	}
}

int QueueArray::dequeue()
{
	int deletedValue = queue[front];		// Get the value at from position in queue
	for (int i = 0; i <= rear - 1; i++) {	// Used to shift the element one position up so that the next element in the queue comes to the front
		queue[i] = queue[i + 1];
	}
	rear--;									// Decrement rear as elements are shifted one position up
	return deletedValue;					// Return the deleted value
}

int QueueArray::peek()
{
	return queue[front];			// Return the element at the front
}

bool QueueArray::isEmpty()
{
	if (rear == -1)					// if rear = -1, means queue is empty
		return true;
	else
		return false;
}

void QueueArray::display()
{
	if (rear == -1)
		cout << "Queue is empty" << endl;
	else {
		cout << endl;
		for (int i = 0; i <= rear; i++) {
			cout << queue[i] << endl;
		}
	}
}
