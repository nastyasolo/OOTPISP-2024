#include <iostream>
#include <string>
#include "Organization.h"
using namespace std;
int main() {
	Organization comp1 = Organization("name1");
	InsuranceCompany comp2 = InsuranceCompany("name2", 40);
	ShipbuildingCompany comp3 = ShipbuildingCompany("name3", 15);
	Factory comp4 = Factory("name4", 17);
	comp2.show();
	cout << "------------------------------------------" << endl;
	comp3.show();
	cout << "------------------------------------------" << endl;
	comp4.show();
	cout << "------------------------------------------" << endl;
	Organization::printHead();

	return 0;
}
