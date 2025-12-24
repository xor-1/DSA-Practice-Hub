#include "Doubly_LinkedList_Node.h"

class Double_LinkedList {
	Node* head = NULL;
	Node* tail = NULL;

public:

	// add a node at head;
	void add_node(int data) {
		Node* tmp = new Node(data);
		if (head == NULL) {
			head = tmp;
			tail = tmp;
			return;
		}
		else {
			tmp->next = head;
			head->prev = tmp;
			head = tmp;
		}
	}

	// removing a node from head;
	void remove_node_from_head() {
		Node* tmp = head;
		head = head->next;
		tmp->next = NULL;
		head->prev = NULL;
		delete tmp;
	}

	// removing a node from tail
	void remove_node_from_tail() {
		Node* tmp = tail;
		tail = tail->prev;
		tail->next = NULL;
		tmp->prev = NULL;
		delete tmp;
	}

	// adding a node in middle
	void add_node_in_middle(int data, int location) {
		Node* current = head;
		int count = 1;
		while (current != NULL && count < location - 1) {
			current = current->next;
			count++;
		}
		// Check if current is NULL or current->next is NULL (invalid location)
		if (current == NULL || current->next == NULL) {
			// Optionally handle error or insert at tail
			return;
		}
		Node* tmp = new Node(data);
		tmp->next = current->next;
		tmp->prev = current;
		current->next->prev = tmp;
		current->next = tmp;
	}

	// removing a node from middle
	void remove_node_from_middle(int location) {

	}
};