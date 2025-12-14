// Always try to handle all edge cases in every function.
// Imagine in your mind that how lists and Data structures work and keep coding.
// Trust me you will get the vibe!

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

	// insert a node at a desirec location in the list;
	void add_in_middle(int n, int location) {
		Node* tmp = new Node(n);

		if (location == 1) {
			add_node(location);
			return;
		}
		Node* current = head;
		int count = 1;

		while (current != NULL && count < location - 1) {
			current = current->next;
			count++;
		}
		if (current == NULL) {
			delete tmp;
			return;
		}
		tmp->next = current->next;
		current->next = tmp;
	}
	
	// deleting the list...
	void deleteAll() {
		Node* tmp;
		while (head != NULL) {
			tmp = head;
			head = head->next;
			delete tmp;
		}
	}

	// remove node from tail...;
	void rem_node_from_tail() {
		if (head == NULL) return;
		else if (head->next == NULL) {
			delete head;
			head = NULL;
		}
		else {
			Node* prev = head, * current = head->next;
			while (current->next != NULL) {
				prev = current;
				current = current->next;
			}
			prev->next = current->next;
			delete current;
		}
	}

	// removing node at a desired location...;
	void rem_node_at_tail(int location) {
		int count = 1;
		Node* prev = head, * current = head->next;
		while (current->next != NULL && count < location - 1) {
			prev = current;
			current = current->next;
			count++;
		}
		prev->next = current->next;
		current->next = NULL;
		delete current; 
	}
};

int main() {

	cout << "Linked List completed!";
	return 0;
}