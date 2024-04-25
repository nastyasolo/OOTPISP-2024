#pragma once

#include <string>
#include <iostream>


#ifndef ORGANIZATION_H
#define ORGANIZATION_H


class Organization {
protected:

	static Organization* head;
	static Organization* lastObject;
public:
	std::string name;
	Organization* next;
	Organization();
	Organization(std::string_view name);
	~Organization();

	static void printHead();
	virtual void show();
	virtual void printVirtual();
	void print() const;
	Organization* getHead();
	Organization* getNext();
	void setNext(Organization* next);
	Organization* getThis();
	std::string getName() const;
};

class InsuranceCompany : public Organization {
private:
	int numberOfWorkers;
public:
	InsuranceCompany(std::string_view name, int numberOfWorkers);
	void printVirtual() override;
	void show() override;
};
class ShipbuildingCompany : public Organization {
private:
	int numberOfWorkers;
public:
	ShipbuildingCompany(std::string_view name, int numberOfWorkers);
	void printVirtual() override;
	void show() override;
};
class Factory : public Organization {
private:
	int numberOfWorkers;
public:

	Factory(std::string_view name, int numberOfWorkers);
	void printVirtual() override;
	void show() override;
};
#endif