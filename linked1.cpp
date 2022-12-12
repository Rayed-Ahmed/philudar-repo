//#include <iostream>
//using namespace std;
//
//struct Node {
//	int data;
//	Node* next;
//};
//
//Node* head;
//
//void insert(int& j) {
//	Node* temp = new Node();
//	temp->data = j;
//	temp->next = NULL;
//	if (head == NULL) {
//		head = temp;
//		return;
//	}
//	Node* temp2 = head;
//	while (temp2->next != NULL) {
//		temp2 = temp2->next;
//	}
//	temp2->next = temp;
//}
//
//void print() {
//	Node* temp = head;
//	while (temp != NULL) {
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
//	cout << "\n";
//}
//
//int main() {
//	head = NULL;
//	int n,j;
//	cout << "How many numbers your want to add in list?: ";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "Enter Your Number: ";
//		cin >> j;
//		insert(j);
//		print();
//	}
//	return 0;
//}