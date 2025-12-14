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


};

int main() {


	cout << "Program Compiled Successfully!";
	return 0;
}