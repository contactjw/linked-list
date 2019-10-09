#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_
#include "Customer.hpp"

struct node {
	Customer *data;
	node *next;
};

class LinkedList {
private:
	node *head;
	int size(node*);
	void push_back(node*, node*);
	void print_list(node*);

public:
	LinkedList();
	int size();
	void push_back(Customer*);
	void print_list();
	bool exists(int);
	Customer* find(int);
	void delete_list();
	void push_front(Customer*);
//	Customer* pop_front ();
	virtual ~LinkedList();

};

#endif
