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
//void insert(int x) {
//	Node* temp = new Node();
//	temp->data = x;
//	temp->next = head;
//	head = temp;
//}
//
//void search(int x) {
//	Node* temp = head;
//	while (temp != NULL) {
//		if (temp->data == x) {
//			cout << "Data found \n";
//			return;
//		}
//		temp = temp->next;
//	}
//	if (temp == NULL) {
//		cout << "Not Found \n";
//	}
//}
//
//int main() {
//	head = NULL;
//
//	int n, j;
//	cout << "How many numbers your want to add in list?: ";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "Enter Your Number: ";
//		cin >> j;
//		insert(j);
//	}
//
//
//	search(3);
//	search(4);
//	search(10);
//}