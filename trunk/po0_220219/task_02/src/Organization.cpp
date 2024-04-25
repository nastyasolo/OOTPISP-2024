#include "Organization.h"
#include <iostream>
#include <string>
using namespace std;

Organization::Organization() {
	if (head == nullptr) {
		head = this;
	}
	next = nullptr;
	if (lastObject != nullptr) {
		lastObject->setNext(this);
	}
	lastObject = this;
	name = "name";
}
Organization::Organization(string const name) {
	if (head == nullptr) {
		head = this;
	}
	next = nullptr;
	if (lastObject != nullptr) {
		lastObject->setNext(this);
	}
	lastObject = this;
	this->name = name;
}
void Organization::printHead() {
	Organization* ptr = head;
	while (ptr != NULL) {
		cout << ptr->getName() << endl;
		ptr = ptr->next;
	}
}
void Organization::show() {
	Organization* ptr = head;
	while (ptr != NULL) {
		cout << ptr->getName() << endl;
		ptr = ptr->next;
	}
}
void Organization::printVirtual() {
	cout << "Organization (virtual function)" << endl;
}

void Organization::print() const {
	cout << "Organization" << endl;
}

Organization* Organization::getHead() {
	return head;
}
Organization* Organization::getNext() {
	return next;
}
void Organization::setNext(Organization* next) {
	this->next = next;
}
Organization* Organization::getThis() {
	return this;
}
string Organization::getName()  const {
	return name;
}
Organization* Organization::head = nullptr;
Organization* Organization::lastObject = nullptr;


InsuranceCompany::InsuranceCompany(string name, int numberOfWorkers) {
	this->name = name;
	this->numberOfWorkers = numberOfWorkers;
}
void InsuranceCompany::printVirtual() {
	cout << "Insurance Company (virtual function)" << endl;
}
void InsuranceCompany::show() {
	Organization* ptr = head;
	while (ptr != NULL) {
		cout << ptr->getName() << endl;
		ptr = ptr->getNext();
		if (this->getNext() == ptr) {
			break;
		}
	}
}
ShipbuildingCompany::ShipbuildingCompany(string name, int numberOfWorkers) {
	this->name = name;
	this->numberOfWorkers = numberOfWorkers;
}
void ShipbuildingCompany::printVirtual() {
	cout << "Shipbuilding Company (virtual function)" << endl;
}
void ShipbuildingCompany::show() {
	Organization* ptr = head;
	while (ptr != NULL) {
		cout << ptr->getName() << endl;
		ptr = ptr->getNext();
		if (this->getNext() == ptr) {
			break;
		}
	}

}

Factory::Factory(string name, int numberOfWorkers) {
	this->name = name;
	this->numberOfWorkers = numberOfWorkers;
}
void Factory::printVirtual() {
	cout << "Factory (virtual function)" << endl;
}
void Factory::show() {
	Organization* ptr = head;
	while (ptr != NULL) {
		cout << ptr->getName() << endl;
		ptr = ptr->getNext();
		if (this->getNext() == ptr) {
			break;
		}
	}

}
