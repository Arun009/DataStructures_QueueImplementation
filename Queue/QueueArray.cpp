#include "QueueArray.h"
#include <iostream>
using namespace std;


QueueArray::QueueArray(int size)
{
	this->size = size;
	head = 0;
	tail = -1;
	queue = new int[size];
}


QueueArray::~QueueArray()
{
	delete[] queue;
}

void QueueArray::enqueue(int value)
{
	if (tail == size - 1) {
		cout << "Queue is full: Cannot add new values" << endl;
		system("pause");
	}
	else if (tail == -1) {
		tail++;
		queue[tail] = value;
	}
	else {
		tail++;
		queue[tail] = value;
	}
}

int QueueArray::dequeue()
{
	int deletedValue = queue[head];
	for (int i = 0; i <= tail - 1; i++) {
		queue[i] = queue[i + 1];
	}
	tail--;
	return deletedValue;
}

int QueueArray::peek()
{
	return queue[head];
}

bool QueueArray::isEmpty()
{
	if (tail == -1)
		return true;
	else
		return false;
}

void QueueArray::display()
{
	if (tail == -1)
		cout << "Queue is empty" << endl;
	else {
		cout << endl;
		for (int i = 0; i <= tail; i++) {
			cout << queue[i] << endl;
		}
	}
}
