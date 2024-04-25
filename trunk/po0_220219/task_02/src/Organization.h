#pragma once

#include <string>
#include <iostream>

#ifndef ORGANIZATION_H
#define ORGANIZATION_H


class Organization {
protected:
	std::string name;
	Organization* next;
	static Organization* head;
	static Organization* lastObject;
public:
	Organization();
	Organization(const std::string& name);
	virtual ~Organization();

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
	virtual ~InsuranceCompany();
	InsuranceCompany(const std::string& name, int numberOfWorkers);
	void printVirtual() override;
	void show() override;
};
class ShipbuildingCompany : public Organization {
private:
	int numberOfWorkers;
public:
	virtual ~ShipbuildingCompany();
	ShipbuildingCompany(const std::string& name, int numberOfWorkers);
	void printVirtual() override;
	void show() override;
};
class Factory : public Organization {
private:
	int numberOfWorkers;
public:
	virtual ~Factory();

	Factory(const std::string& name, int numberOfWorkers);
	void printVirtual() override;
	void show() override;
};
#endif
