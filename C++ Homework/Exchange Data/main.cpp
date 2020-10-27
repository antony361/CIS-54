
#include <iostream> 
using namespace std;

struct Node {
	// any type of data
	int data;		
	Node *next;
};
typedef Node* NodePointer;

// Purpose: insert a new node at the head of list, with data = data
// Precondition: head is pointing to an existing linked list 
void head_insert(NodePointer& head, int new_data);
// Purpose: remove all the nodes
void delete_nodes(NodePointer& head);
// Purpose: remove nodes with data = data, returns true if successful
void print_nodes(NodePointer head);

// Purpose: swap the first data with the last data
void exchange_data(NodePointer& head);

int main() {

	NodePointer head = nullptr;
	head_insert(head, 9);
	head_insert(head, 8);
	head_insert(head, 4);
	head_insert(head, 5);
	head_insert(head, 7);

	cout << "Just finished adding nodes\n";
	print_nodes(head);
	exchange_data(head);
	cout << "Just finished exchanging data\n";
	print_nodes(head);


	delete_nodes(head);

	return 0;
}

void head_insert(NodePointer& head, int new_data) {
	// Create a new NodePointer temp_pointer
	// Create a new Node
	NodePointer temp_pointer = new Node;
	
	// Set the new Node’s data to 9
	temp_pointer->data = new_data;
	// Set the new Node’s pointer next to equal to head
	temp_pointer->next = head;
	// Set head to equal to temp_pointer
	head = temp_pointer;
	// Set temp_pointer to nullptr
	temp_pointer = nullptr;
}

void delete_nodes(NodePointer& head) {
	NodePointer iter = head, iter2;
	//for (iter = head; iter != nullptr; iter = iter->next) 
	while (iter != nullptr) {
		iter2 = iter->next;
		// iter pointing to the node that we are deleting
		// iter2 pointing to the node after the one iter is pointing to 
		cout << iter->data << " is being destroyed\n";
		delete iter;
		iter = iter2;
	}
	head = nullptr;
}

void print_nodes(NodePointer head) {
	cout << "Current linked list: ";
	for (NodePointer iter = head; iter != nullptr; iter = iter->next) {
		cout << " " << iter->data;
	}
	cout << endl;
}

void exchange_data(NodePointer& head) {
  NodePointer last = head;

  int first_data = head->data; // just to make it easier to call back to the data of the first node

  while (last->next != nullptr) {
    last = last->next; // makes sure we reach the last node 
  }
  head->data = last->data;
  last->data = first_data;
}
