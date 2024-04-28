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
Organization::Organization(string_view name1) {
	if (head == nullptr) {
		head = this;
	}
	next = nullptr;
	if (lastObject != nullptr) {
		lastObject->setNext(this);
	}
	lastObject = this;
	name = name1;
}
void Organization::printHead() {
	Organization* ptr = head;
	while (ptr != nullptr) {
		cout << ptr->getName() << endl;
		ptr = ptr->next;
	}
}
void Organization::show() {
	cout << " " << endl;
	Organization* ptr = head;
	while (ptr != nullptr) {
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
void Organization::setNext(Organization* next1) {
	next = next1;
}
Organization* Organization::getThis() {
	return this;
}
string Organization::getName()  const {
	return name;
}
Organization* Organization::head = nullptr;
Organization* Organization::lastObject = nullptr;


InsuranceCompany::InsuranceCompany(string_view name1, const int numberOfWorkers1)
	: numberOfWorkers(numberOfWorkers1) {
	name = name1;
}
void InsuranceCompany::printVirtual() {
	cout << "Insurance Company (virtual function)" << endl;
}
void InsuranceCompany::show() {
	Organization* ptr = head;
	while (ptr != nullptr) {
		cout << ptr->getName() << " - Number of Workers: " << numberOfWorkers << endl;
		ptr = ptr->getNext();
		if (this->getNext() == ptr) {
			break;
		}
	}
}
ShipbuildingCompany::ShipbuildingCompany(string_view name1, const int numberOfWorkers1)
	: numberOfWorkers(numberOfWorkers1) {
	name = name1;
}
void ShipbuildingCompany::printVirtual() {
	cout << "Shipbuilding Company (virtual function)" << endl;
}
void ShipbuildingCompany::show() {
	Organization* ptr = head;
	while (ptr != nullptr) {
		cout << ptr->getName() << " - Number of Workers: " << numberOfWorkers << endl;
		ptr = ptr->getNext();
		if (this->getNext() == ptr) {
			break;
		}
	}

}




Factory::Factory(string_view name1, const int numberOfWorkers1)
	: numberOfWorkers(numberOfWorkers1) {
	name = name1;
}
void Factory::printVirtual() {
	cout << "Factory (virtual function)" << endl;
}
void Factory::show() {
	Organization* ptr = head;
	while (ptr != nullptr) {
		cout << ptr->getName() << " - Number of Workers: " << numberOfWorkers << endl;
		ptr = ptr->getNext();
		if (this->getNext() == ptr) {
			break;
		}
	}

}
