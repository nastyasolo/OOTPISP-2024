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
	explicit Organization(std::string_view name);
	virtual ~Organization() = default;

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
public:
	InsuranceCompany(std::string_view name, const int numberOfWorkers);
	~InsuranceCompany() final = default;

	void printVirtual() override;
	void show() override;
private:
	int numberOfWorkers;
};
class ShipbuildingCompany : public Organization {
public:
	ShipbuildingCompany(std::string_view name, const int numberOfWorkers);
	~ShipbuildingCompany() final = default;

	void printVirtual() override;
	void show() override;
private:
	int numberOfWorkers;
};
class Factory : public Organization {

public:

	Factory(std::string_view name, const int numberOfWorkers);
	~Factory() final = default;

	void printVirtual() override;
	void show() override;
private:
	int numberOfWorkers;
};
#endif
