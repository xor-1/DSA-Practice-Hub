#pragma once
#ifndef SINGLY_LINKEDLIST_NODE_H
#define SINGLY_LINKEDLIST_NODE_H

#include <iostream>
using namespace std;
class Node {
	int data;
	Node* next = NULL;

public:
	Node(int data) {
		this->data = data;
	}
	friend class LinkedList;
};

#endif