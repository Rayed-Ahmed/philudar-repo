#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* root;

Node* getNewNode(int data) {
	Node* temp = new Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

Node* insert(Node* root, int data) {
	if (root == NULL) {
		root = getNewNode(data);
	}
	else if (data <= root->data) {
		root->left = insert(root->left , data);
	}
	else {
		root->right = insert(root->right, data);
	}
	return root;
}

void print(Node* root) {
	while (root != NULL) {
		cout << root->data<<" ";
		root = root->right;
	}
	cout << endl;
}

bool search(Node* root, int data) {
	if (root == NULL) {
		return false;
	}
	else if (root->data == data) {
		return true;
	}
	else if (data <= root->data) {
		return search(root->left, data);
	}
	else {
		return search(root->right, data);
	}
}

int main() {
	root = NULL;
	root = insert(root, 5);
	root = insert(root, 2);
	root = insert(root, 6);
	root = insert(root, 11);

	print(root);
	 
	if (search(root,-2) == true) {
		cout << "Found" << endl;
	}
	else {
		cout << "Not found";
	}
	return 0;
}