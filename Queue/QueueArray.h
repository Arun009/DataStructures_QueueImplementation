#pragma once
class QueueArray
{
private:
	int head;
	int tail;
	int size;
	int *queue;

public:
	QueueArray(int size);
	~QueueArray();
	void enqueue(int value);
	int dequeue();
	int peek();
	bool isEmpty();
	void display();
};

