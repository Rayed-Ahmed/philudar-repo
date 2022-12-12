#include <iostream>
using namespace std;

#define max_size 5

int queue[max_size];
int front = -1;
int rear = -1;

void enqueue(int data) {
	if (front == -1 && rear == -1) {
		front = rear = 0;
	}
	else if ((rear + 1) % max_size == front) {
		cout << "que is full";
		return;
	}
	else {
		rear = (rear + 1) % max_size;
	}
	queue[rear] = data;
}

void dequeue() {
	if (front == -1 && rear == -1) {
		cout << "No elements in list to dequeue";
		return;
	}
	else if (front == rear) {
		front = rear = -1;
	}
	else {
		front = (front + 1) % max_size;
	}
}

int main() {
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	return 0;
}