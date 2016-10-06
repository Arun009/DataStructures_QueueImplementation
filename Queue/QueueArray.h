/*
Queue is also an abstract data type or a linear data structure, in which the first element is inserted from one end called REAR(also called tail), 
and the deletion of exisiting element takes place from the other end called as FRONT(also called head).
To understand a queue, think of a cafeteria line: the person at the front is served first, and people are added to the line at the back. 
Thus, the first person in line is served first, and the last person is served last. This can be abbreviated to First In, First Out (FIFO).
In Queue terminology, the addition of an element to a queue is known as an enqueue, and removing an element from the queue is known as a dequeue.

Basic Operations
enqueue() : pushing/storing an element at the rear end of queue
dequeue() : removing an element from front of queue
peek() : get the front data element of the queue
isEmpty() : check if queue is empty
*/
#pragma once
class QueueArray
{
private:
	int front;					// Denotes the front position of the queue, or 0 in the array
	int rear;					// Denotes the rear position of the queue, position of last element in the queue, -1 if queue is empty
	int size;					// Max size of the queue
	int *queue;					// Pointer used to point to the array where queue elements are stored

public:
	QueueArray(int size);		// Constructor
	~QueueArray();				// Destructor
	void enqueue(int value);	// Pushing/storing an element at the rear end of queue
	int dequeue();				// Removing an element from front of queue
	int peek();					// Get the front data element of the queue
	bool isEmpty();				// Check if the queue is empty
	void display();				// Display the queue
};

