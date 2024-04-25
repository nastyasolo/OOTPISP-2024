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
Organization::Organization(string name) {
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
	cout << "Это организация (виртуальная функция)" << endl;
}

void Organization::print() {
	cout << "Это организация" << endl;
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
string Organization::getName() {
	return name;
}
Organization* Organization::head = nullptr;
Organization* Organization::lastObject = nullptr;

InsuranceCompany::InsuranceCompany() {
	Organization();
	numberOfWorkers = 40;
}
InsuranceCompany::InsuranceCompany(string name, int numberOfWorkers) {
	this->name = name;
	this->numberOfWorkers = numberOfWorkers;
}
void InsuranceCompany::printVirtual() {
	cout << "Это страховая компания(виртуальная функция)" << endl;
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
ShipbuildingCompany::ShipbuildingCompany() {
	Organization();
	numberOfWorkers = 20;
}
ShipbuildingCompany::ShipbuildingCompany(string name, int numberOfWorkers) {
	this->name = name;
	this->numberOfWorkers = numberOfWorkers;
}
void ShipbuildingCompany::printVirtual() {
	cout << "Это судостроительная компания (виртуальная функция)" << endl;
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
Factory::Factory() {
	Organization();
	numberOfWorkers = 20;
}
Factory::Factory(string name, int numberOfWorkers) {
	this->name = name;
	this->numberOfWorkers = numberOfWorkers;
}
void Factory::printVirtual() {
	cout << "Это завод (виртуальная функция)" << endl;
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
