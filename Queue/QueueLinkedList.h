#pragma once
struct node {
	int data;
	node* next;
};

class QueueLinkedList
{
private:
	node *head;
	node *tail;
public:
	QueueLinkedList();
	~QueueLinkedList();
	void enqueue(int value);
	int dequeue();
	int peek();
	bool isEmpty();
	void display();
	void destroy();
};

