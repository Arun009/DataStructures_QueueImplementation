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
struct node {					// Declare a struct node that has a data and a pointer that points to the next value in the list
	int data;					// Stores the actual data
	node* next;					// next pointer points to the next node or element in the list, next is a nullptr if the node is the last element in the list
};

class QueueLinkedList
{
private:
	node *front;				// Pointer of type struct node that points to the front element in the queue, nullptr if queue is empty 
	node *rear;					// Pointer of type struct node that points to the rear element in the queue, nullptr if queue is empty 
public:
	QueueLinkedList();			// Constructor
	~QueueLinkedList();			// Destructor
	void enqueue(int value);	// Pushing/storing an element at the rear end of queue
	int dequeue();				// Removing an element from front of queue
	int peek();					// Get the front data element of the queue
	bool isEmpty();				// Check if queue is empty
	void display();				// Displays queue
	void destroy();				// Manually destroys the list
};

