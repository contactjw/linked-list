#include "Customer.hpp"

Customer::Customer() {

}

bool Customer::setID(int idNum) {
	if (idNum <= 0)
		return false;
	ID = idNum;
	return true;
}

int Customer::getID() {
	return ID;
}

bool Customer::setName(string newName) {
	if (newName == "")
		return false;
	name = newName;
	return true;
}

string Customer::getName() {
	return name;
}

bool Customer::setAddress(string newAddress) {
	if (newAddress == "")
		return false;
	address = newAddress;
	return true;
}

string Customer::getAddress() {
	return address;
}

bool Customer::setCity(string newCity) {
	if (newCity == "")
		return false;
	city = newCity;
	return true;
}

string Customer::getCity() {
	return city;
}

bool Customer::setState(string newState) {
	if (newState == "")
		return false;
	state = newState;
	return true;
}

string Customer::getState() {
	return state;
}

bool Customer::setZipCode(int newZip) {
	if (newZip == 0)
		return false;
	zipCode = newZip;
	return true;
}

int Customer::getZipCode() {
	return zipCode;
}

bool Customer::setAccountBalance(float newBalance) {
	if (newBalance < 0)
		return false;
	accountBalance = newBalance;
	return true;
}

float Customer::getAccountBalance() {
	return accountBalance;
}

Customer::~Customer() {

}

