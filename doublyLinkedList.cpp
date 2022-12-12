#include <iostream>
using namespace std;

struct Node {
//
//	int data;
//	Node* prev;
//	Node* next;
//};
//
//Node* head;
//
//Node* newNode(int data) {
//	Node* temp = new Node();
//	temp->data = data;
//	temp->next = NULL;
//	temp->prev = NULL;
//	return temp;
//}
//
//void insertingNode(int data) {
//	Node* temp = newNode(data);
//	if (head == NULL) {
//		head = temp;
//		return;
//	}
//	/*temp->next = head;
//	head->prev = temp;
//	head = temp;*/
//	Node* temp1 = head;
//
//	while (temp1->next != NULL) {
//		temp1 = temp1->next;
//	}
//
//	temp1->next = temp;
//	temp->prev = temp1;
//}
//
//void print() {
//	Node* temp = head;
//	while (temp != NULL) {
//		cout << temp->data<<" ";
//		temp = temp->next;
//	}
//	cout << "\n";
//}
//
//void reversedOrder() {
//	Node* temp = head;
//	while (temp->next != NULL) {
//		temp = temp->next;
//	}
//
//	while (temp != NULL) {
//		cout << temp->data << " ";
//		temp = temp->prev;
//	}
//	cout << "\n";
//}
//
//int main() {
//	head = NULL;
//	int n, j;
//	cout << "How many numbers your want to add in list?: ";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "Enter Your Number: ";
//		cin >> j;
//		insertingNode(j);
//		print();
//		cout << "Reveresed:  \n";
//		reversedOrder();
//	}
//
//	/*cout << "Reveresed Order: \n";
//	reversedOrder();*/
//	
//	return 0;
//}