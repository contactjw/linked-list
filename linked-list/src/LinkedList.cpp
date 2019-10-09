#include "LinkedList.hpp"

LinkedList::LinkedList() {
	head = nullptr;
}

int LinkedList::size() {
	if (head == nullptr)
		return 0;
	else {
		return 1 + size(head->next);
	}
}

int LinkedList::size(node* nextNode) {
	if (nextNode == nullptr) {
		return 0;
	}
	return 1 + size(nextNode->next);
}

void LinkedList::push_back(Customer* info) {
	node *newNode = new node;
	newNode->data = info;
	newNode->next = nullptr;
	node *current = nullptr;

	if (head == nullptr) {
		head = newNode;
	} else {
		current = head;
		push_back(newNode, current);
	}
}

void LinkedList::push_back(node *newNode, node *current) {
	if (current->next == nullptr)
		current->next = newNode;
	else
		push_back(newNode, current->next);
}

void LinkedList::print_list() {
	node *current = head;
	if (head == nullptr)
		cout << "Empty Linked List";
	else {
		cout << current->data->getID() << endl;
		print_list(current->next);
	}
}

void LinkedList::print_list(node *current) {
	if (current == nullptr)
		return;
	else {
		cout << current->data->getID() << endl;
		print_list(current->next);
	}
}

bool LinkedList::exists(int ID) {
	node *current = nullptr;
	current = head;

	while (current != NULL) {
		if (current->data->getID() == ID)
			return true;
		current = current->next;
	}
	return false;
}

Customer* LinkedList::find(int ID) {
	node *current = nullptr;
	current = head;

	while (current != NULL) {
		if (current->data->getID() == ID) {
			Customer* foundCust = current->data;
			return foundCust;
		}
		current = current->next;
	}
	return nullptr;
}

void LinkedList::delete_list() {
	node *temp;
	while (head != nullptr) {
		temp = head;
		head = head->next;
		delete temp;
		temp = nullptr;
	}
}

void LinkedList::push_front(Customer* info) {
	node *newNode = new node;
	newNode->data = info;
	newNode->next = head;
	head = newNode;
}

//Customer* LinkedList::pop_front() {
//	Customer *poppedInfo = nullptr;
//	node *temp = nullptr;
//
//
//}
//
//

LinkedList::~LinkedList() {
	delete_list();
}

