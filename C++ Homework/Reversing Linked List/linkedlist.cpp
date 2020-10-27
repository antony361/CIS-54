// File:	linkedlist.cpp
// Lab:		13-0 Bonuse lab 
// Purpose:	Implementation of the reverse function as described below. 
//			You are to submit this file and linkedlist.h only. 
// Reverse function:
// 		Write a void function that takes a linked list of integers and reverses the order 
// 		of its nodes. The function will have one call-by-reference parameter that is a 
// 		pointer to the head of the list. After the function is called, this pointer will 
// 		point to the head of a linked list that has the same nodes as the original list, but 
// 		in the reverse of the order they had in the original list. 
// 		Note that your function will neither create nor destroy any nodes. It will simply 
// 		rearrange nodes. Place your function in a suitable test program.
// Author:	Monza Lui
// Date:	Nov 26, 2019
#include <iostream>
#include "linkedlist.h"
#include "node.h"

using namespace std;

// This function inserts a new node onto the head of the list
// and is a class-based version of the same function defined
// in Display 15.4.
void head_insert(NodePtr &head, int the_number)
{
	NodePtr temp_ptr;
	temp_ptr = new Node(the_number, head);
	head = temp_ptr;
}

void reverse(NodePtr &head) {
	// Good luck!
	NodePtr previous = nullptr;
	NodePtr next = nullptr;
	NodePtr current = head;

	next = head->getLink(); // makes next point to next node
	while (next != nullptr) // makes sure to stop after last node
	{
		next = current->getLink();
		current->setLink(previous); // makes the current node point to the previous node (the first time it loops it points to nullptr making it the last node in list)
		previous = current; 
		current = next; // moves the node pointers up one to repeat loop
	}
	head = previous; // previous should be equal to the last node in list so assigning it to head makes it the first node in list
}

void print_nodes(NodePtr head) {
	cout << "Current linked list: ";
	for (NodePtr iter = head; iter != nullptr; iter = iter->getLink()) {
		cout << iter->getData() << " ";
	}
	cout << endl;
}

void delete_nodes(NodePtr& head) {
	while (head != NULL)
	{
		NodePtr discard = head;
		head = head->getLink();
		cout << "Deleting " << discard->getData() << endl;
		delete discard;
	}
}


