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


/* Linked-List: Traversing the list
	For what purposes will we need to traverse the list?
	Searching for an item
	Printing the items in the list
	Counting the number of items
	Adding/removing an item in the middle of list
	Deleting the whole list */

	void traverse_list() {
		Node* tmp = head;

		if (tmp == NULL) return;
		while (tmp != NULL) {
			tmp = tmp->next;
		}
	}

//	Printing the items in the list
	void print() {
		Node* tmp = head;
		if (head == NULL) return;
		while (tmp != NULL) {
			cout << tmp->data << " ";
			tmp = tmp->next;
		}
	}

};

int main() {


	return 0;
}