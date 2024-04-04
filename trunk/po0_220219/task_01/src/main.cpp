#include <iostream>
#include "Library.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	void (Library:: * fptr)(const char*, const char*, int);
	fptr = &Library::Set;
	Library lib1;
	lib1.Print();

	Library lib4(lib1); lib4.Print();
	(lib4.*fptr)("Преступление и наказание", "Федор Достоевскии", 20000);
	Library lib5 = lib1;
	Library* lib6 = &lib5; lib6->Print();
	Library* p = new Library[2];
	p->Set("Анна Каренина", "Лев Толстои", 90000);
	p->Print();
	p++;
	p->Set("Евгении Онегин", "Александр Пушкин", 103000);
	p->Print();
	p--;
	return 0;
}
