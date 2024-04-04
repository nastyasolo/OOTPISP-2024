#include <iostream>
#include "Library.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	void (Library:: * fptr)(const char*, const char*, int);
	fptr = &Library::Set;
	Library lib1;
	(lib1.*fptr)("Crime and Punishment", "Fedor Dostoevsky", 20000);
	lib1.Print();

	Library lib4(lib1); lib4.Print();
	
	Library lib5 = lib1;
	Library* lib6 = &lib5; lib6->Print();
	Library* p = new Library[2];
	p->Set("Anna Karenina", "Lev Tolstoy", 90000);
	p->Print();
	p++;
	p->Set("Eugene Onegin", "Alexander Pushkin", 103000);
	p->Print();
	p--;
	return 0;
}
