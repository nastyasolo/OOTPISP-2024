#include "Employer.h"
#include <string>
#include <iostream>

Employer::Employer(std::string_view _name, const int _age, const std::string &_prof)
    : HumanResources(_name, _age), prof(_prof)
{
}

void Employer::showVirt() const
{
    auto ptr = begin;
    while (ptr != nullptr)
    {
        std::cout << ptr->getName() << std::endl;
        std::cout << ptr->getAge();
        std::cout << std::endl;
        ptr = ptr->getNext();

        if (ptr == this->getNext())
            break;
    }
}