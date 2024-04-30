#include "Engineer.h"
#include <string>
#include <iostream>

Engineer::Engineer(std::string_view _name, const int _age, const std::string &_prof, const std::string &_educ)
    : Employer(_name, _age, _prof), education(_educ)
{
}

void Engineer::showVirt() const
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