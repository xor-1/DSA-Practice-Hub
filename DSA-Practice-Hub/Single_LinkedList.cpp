#include "Singly_LinkedList_Node.h"

class Node {
	int data;
	Node* next = NULL;
public:
	Node(int data) {
		this->data = data;
	}
	friend class LinkedList;
};

class LinkedList {
	Node* head = NULL;

	void add_node(int data) {
		Node* tmp = new Node(data);

		if (head == NULL) {
			head = tmp;
		}
		else {
			tmp->next = head;
			head = tmp;
		}
	}
};

int main() {


	cout << "Program Compiled Successfully!";
	return 0;
}