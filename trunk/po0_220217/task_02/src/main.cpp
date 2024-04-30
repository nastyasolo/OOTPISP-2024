#include <iostream>
#include "HumanResources.h"
#include "Administator.h"
#include "Employer.h"
#include "Engineer.h"

int main()
{
    auto administator = Administator("Denis", 24, 12);
    auto engineer = Engineer("Ivan", 20, "programmer", "higher");
    auto employer = Employer("Artem", 19, "student");
    auto humanResources = HumanResources();

    std::cout << "-------------------------------" << std::endl;

    administator.setAge(20);

    humanResources.setName("Marat");
    humanResources.add();

    std::cout << "Not virtual:" << std::endl;
    employer.showNotVirt();

    std::cout << "-------------------------------";

    std::cout << std::endl;
    std::cout << "virtual:" << std::endl;
    engineer.showVirt();
}