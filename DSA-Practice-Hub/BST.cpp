#include <iostream>
using namespace std;
class Node {
	int data;
	Node* left = NULL;
	Node* right = NULL;
public:
	Node(int data) {
		this->data = data;
	}
	friend class BST;
};
class BST {
	Node* root = NULL;

public:

	// INSERT ELEMENT IN A BST.
	// NOTE: Every Node will added as a leaf Node!
	void insertData(int d) {
		Node* tmp = new Node(d);
		if (root == NULL) {
			root = tmp;
			cout << "The data has been inserted successfully!" << endl;
			return;
		}
		Node* current = root;
		Node* prev = NULL;

		while (current != NULL) {
			prev = current;
			if (tmp->data < current->data)
				current = current->left;
			else
				current = current->right;
		}
		// NOTE: AT THIS POINT WE HAVE OUR "current" AS "NULL"
		// We will add the Node using our Prev pointer;
		// we will check for the basic BST requirements
		if (tmp->data < prev->data)
			prev->left = tmp;
		else
			prev->right = tmp;
		cout << "The data has been added successfully!" << endl;
	}

	// void search by data function
	void searchByData(int n) {
		Node* tmp = new Node(n);

		if (root == NULL) {
			cout << "THE TREE IS EMPTY" << endl;
			return;
		}
		Node* current = root;

		while (current != NULL) {
			if (tmp->data == current->data) {
				cout << "DATA HAS BEEN FOUND: " << current->data << endl;
				break;
			}	
			if (tmp->data < current->data)
				current = current->left;
			else
				current = current->right;
		}
		if (current == NULL) {
			cout << "Node NOT Found!" << endl;
			return;
		}
		cout << "Node Found!" << endl;
	}

	// Traversals....
	// preorder traversal...
	void preOrder(Node* tmp){
		if (tmp != NULL) {
			cout << tmp->data << " ";
			preOrder(tmp->left);
			preOrder(tmp->right);
		}
		else
			return;
	}

	// inorder traversal...
	void inOrder(Node* tmp) {
		if (tmp != NULL) {
			inOrder(tmp->left);
			cout << tmp->data << " ";
			inOrder(tmp->right);
		}
	}

	// postorder traversal
	void postOrder(Node* tmp) {
		if (tmp != NULL) {
			postOrder(tmp->left);
			postOrder(tmp->right);
			cout << tmp->data << " ";
		}
		else
			return;
	}

	// Display Tree
	void displayTree() {
		if (root == NULL) {
			cout << "The Tree is EmptY!" << endl;
			return;
		}
		preOrder(root);
		cout << endl;
		inOrder(root);
		cout << endl;
		postOrder(root);
	}

	// deleting a node in BST
	void deleteNode(int d) {
		if (root == NULL) { cout << "Tree is Empty!" << endl; return; }

		else {
			Node* current = root;
			Node* prev = NULL;

			while (current != NULL) {
				prev = current;
				if (d == current->data) break;
				if (d < current->data)
					current = current->left;
				else
					current = current->right;
			}
			if (current == NULL)
				cout << "Block not found!" << endl;
			
			// case1: CONDITION CHECK FOR LEAF NODE!


		}
	}

};

int main() {
	BST t1;
	t1.insertData(100);
	t1.insertData(50);
	t1.insertData(40);
	t1.insertData(60);
	t1.insertData(150);
	t1.insertData(110);
	t1.insertData(160);
	t1.searchByData(60);
	t1.displayTree();
	return 0;
}