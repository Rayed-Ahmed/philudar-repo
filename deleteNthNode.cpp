#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};

Node* head;

void insert(int data) {
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;

	if (head == NULL) {
		head = temp;
		return;
	}

	Node* temp1 = head;
	while (temp1->next != NULL) {
		temp1 = temp1->next;
	}
	temp1->next = temp;
}

void print() {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}

void deleteNode(int pos) {
	Node* temp = head;
	if (pos == 1) {
		head = temp->next;
		delete temp;
		return;
	}

	for (int i = 0; i < pos - 2; i++) {
		temp = temp->next;
	}
	Node* temp2 = temp->next;
	temp->next = temp2->next;
	delete temp2;
}

int main() {
	head = NULL;
	int n, j;
	cout << "How many numbers your want to add in list?: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter Your Number: ";
		cin >> j;
		insert(j);
		print();
	}

	deleteNode(1);
	deleteNode(4);
	cout << "Final: " << endl;
	print();
	return 0;
}