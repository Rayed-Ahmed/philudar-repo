//#include <iostream>
//using namespace std;
//
//struct Node {
//	int data;
//	Node* next;
//};
//Node* head;
//
//void insert(int& j) {
//	Node* temp = new Node();
//	temp->data = j;
//	temp->next = NULL;
//
//	if (head == NULL) {
//		head = temp;
//		return;
//	}
//
//	Node* temp2 = head;
//	while (temp2->next != NULL) {
//		temp2 = temp2->next;
//	}
//	temp2->next = temp;
//}
//
//void insertNew(int data, int pos) {
//	Node* temp = new Node();
//	temp->data = data;
//	temp->next = NULL;
//
//	if (pos == 1) {
//		temp->next = head;
//		head = temp;
//		return;
//	}
//
//	Node* temp1 = head;
//	for (int i = 0; i < pos - 2; i++) {
//		temp1 = temp1->next;
//	}
//	temp->next = temp1->next;
//	temp1->next = temp;
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
//int main() {
//	head = NULL;
//	int n, j;
//	cout << "How many numbers your want to add in list?: ";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "Enter Your Number: ";
//		cin >> j;
//		insert(j);
//		print();
//	}
//
//	cout << "Final Print \n";
//	insertNew(4, 3);
//	insertNew(10, 1);
//	print();
//
//	return 0;
//}