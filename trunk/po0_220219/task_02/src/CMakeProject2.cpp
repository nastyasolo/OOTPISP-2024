#include <iostream>
#include <string>
#include "Organization.h"
using namespace std;
int main() {
	auto comp1 = Organization("name1");
	auto comp2 = InsuranceCompany("name2", 40);
	auto comp3 = ShipbuildingCompany("name3", 15);
	auto comp4 = Factory("name4", 17);
	comp1.show();
	comp2.show();
	comp3.show();
	comp4.show();
	Organization::printHead();

	return 0;
}
