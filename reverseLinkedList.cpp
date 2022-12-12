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
//void insert(int data) {
//	Node* temp = new Node();
//	temp->data = data;
//	temp->next = NULL;
//	
//	if (head == NULL) {
//		head = temp;
//		return;
//	}
//
//	Node* temp1 = head;
//	while (temp1->next != NULL) {
//		temp1 = temp1->next;
//	}
//	temp1->next = temp;
//}
//
//void reveresed() {
//	Node* current, * prv, * next;
//	current = head;
//	prv = NULL;
//
//	if (current->next == NULL) {
//		head = current;
//		return;
//	}
//	if (current == NULL) {
//		cout << "No element in list to reversed";
//		return;
//	}
//	
//	while (current != NULL) {
//		next = current->next;
//		current->next = prv;
//		prv = current;
//		current = next;
//	}
//	head = prv;
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
//	reveresed();
//	cout << "Reveresed Order: \n";
//	print();
//
//	return 0;
//}