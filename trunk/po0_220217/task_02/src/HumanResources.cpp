#include "HumanResources.h"
#include <iostream>

HumanResources::HumanResources(std::string_view _name, const int _age) : name(_name), age(_age)
{
    if (begin == nullptr)
    {
        begin = this;
    }
    next = nullptr;
    if (last != nullptr)
    {
        last->setNext(this);
    }
    last = this;
}

void HumanResources::showNotVirt() const
{
    std::cout << "non virtua;" << std::endl;
    auto ptr = begin;
    while (ptr != nullptr)
    {
        std::cout << ptr->getName() << std::endl;
        std::cout << ptr->getAge() << std::endl;
        std::cout << std::endl;
        ptr = ptr->getNext();
    }
}

void HumanResources::showVirt() const
{
    auto ptr = begin;
    while (ptr != nullptr)
    {
        std::cout << ptr->getName() << std::endl;
        std::cout << ptr->age;
        ptr = ptr->next;
    }
}

void HumanResources::add()
{
    if (begin == nullptr)
    {
        begin = this;
    }
    next = nullptr;
    if (last != nullptr)
    {
        last->setNext(this);
    }
    last = this;
}

void HumanResources::setName(std::string_view _name)
{
    this->name = _name;
}

void HumanResources::setAge(const int _age)
{
    this->age = _age;
}

void HumanResources::printAll()
{
    auto ptr = begin;
    while (ptr != nullptr)
    {
        std::cout << ptr->getName() << std::endl;
        std::cout << ptr->getAge() << std::endl;
        std::cout << std::endl;
        ptr = ptr->getNext();
    }
}

void HumanResources::setNext(HumanResources *nextNode)
{
    next = nextNode;
}

HumanResources *HumanResources::begin = nullptr;
HumanResources *HumanResources::last = nullptr;