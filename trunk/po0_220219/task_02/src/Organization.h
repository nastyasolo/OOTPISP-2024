#pragma once

#include <string>
#include <iostream>
using namespace std;
#ifndef ORGANIZATION_H
#define ORGANIZATION_H

class Organization {
protected:
	string name;
	Organization* next;
	static Organization* head;
	static Organization* lastObject;
public:
	Organization();
	Organization(string name);
	static void printHead();
	virtual void show();
	virtual void printVirtual();
	void print();
	Organization* getHead();
	Organization* getNext();
	void setNext(Organization* next);
	Organization* getThis();
	string getName();
};

class InsuranceCompany : public Organization {
private:
	int numberOfWorkers;
public:
	InsuranceCompany();
	InsuranceCompany(string name, int numberOfWorkers);
	void printVirtual() override;
	void show() override;
};
class ShipbuildingCompany : public Organization {
private:
	int numberOfWorkers;
public:
	ShipbuildingCompany();
	ShipbuildingCompany(string name, int numberOfWorkers);
	void printVirtual() override;
	void show() override;
};
class Factory : public Organization {
private:
	int numberOfWorkers;
public:
	Factory();
	Factory(string name, int numberOfWorkers);
	void printVirtual() override;
	void show() override;
};
#endif
