#include "Administator.h"
#include <iostream>

Administator::Administator(std::string_view _name, const int _age, const int _exp) : HumanResources(_name, _age), exp(_exp)
{
}

void Administator::set(const std::string &_name, const int _age, const int _exp)
{
    this->setName(_name);
    this->setAge(_age);
    this->exp = _exp;
}

void Administator::showVirt() const
{
    auto ptr = begin;
    while (ptr != nullptr)
    {
        std::cout << ptr->getName() << std::endl;
        std::cout << ptr->getAge() << std::endl;
        ptr = ptr->getNext();

        if (ptr == this->getNext())
            break;
    }
}