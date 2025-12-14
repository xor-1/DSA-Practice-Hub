#include "Singly_LinkedList_Node.h"

class LinkedList {
	Node* head = NULL;

	// add a node at head
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

	// remove a node from head;
	void rem_node() {
		Node* tmp = head;
		head = head->next;
		delete tmp;
	}


};

int main() {


	cout << "Program Compiled Successfully!";
	return 0;
}