#pragma once
#ifndef DOUBLY_LINKED_LIST_NODE_H
#define DOUBLY_LINKED_LIST_NODE_H

#include <iostream>
using namespace std;

class Node {
	int data;
	Node* next = NULL;
	Node* prev = NULL;

public:
	Node(int data) {
		this->data = data;
	}

	friend class Double_LinkedList;
};

#endif