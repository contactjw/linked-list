#include <iostream>
#include "Customer.hpp"
#include "LinkedList.hpp"
using namespace std;


int main()
{
	LinkedList *newList = new LinkedList;
	Customer *newCustomer = new Customer;
	Customer *newCustomer2 = new Customer;
	Customer *newCustomer3 = new Customer;
	Customer *newCustomer4 = new Customer;
	Customer *newCustomer5 = new Customer;

	cout << "Size of list: " << newList->size() << endl;

	int checkID = 1234;

	newCustomer->setID(1234);
	newCustomer2->setID(5678);
	newCustomer3->setID(8675309);
	newCustomer4->setID(4032);
	newCustomer5->setID(9503);

	newList->push_back(newCustomer);
	cout << "Size of list: " << newList->size() << endl;
	newList->print_list();


	newList->push_front(newCustomer2);

	newList->push_back(newCustomer3);

	cout << "Size of list: " << newList->size() << endl;

	newList->print_list();

	if (newList->exists(checkID))
		cout << "Found ID!" << endl;
	else
		cout << "Couldn't find that id..." << endl;

	if (newList->find(432) != nullptr)
		cout << "Found ID!" << endl;
	else
		cout << "Couldn't find that id..." << endl;


	return 0;
}
