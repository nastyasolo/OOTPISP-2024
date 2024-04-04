#include <iostream>
#include "Library.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	Library lib[] = { Library("Воина и мир", "Л. Толстои", 10000),Library("Преступление и наказание","Федор Достоевскии",43000),
	Library("Мастер и Маргарита","Михаил Булгаков",66000),Library(" "," ",2000) }; lib[2].SetName("Герои нашего времени");
	lib[3].Set("Отцы и дети", "Иван Тургенев", 77000);
	for (int i = 0; i < 4; i++) {
		lib[i].Print();
	}
	Library lib4(lib[3]); lib4.Print();
	Library lib5 = lib[0]; Library* lib6 = &lib5; lib6->Print();
	Library* p = new Library[2];
	p->Set("Анна Каренина", "Лев Толстои", 90000);
	p->Print();
	p++;
	p->Set("Евгении Онегин", "Александр Пушкин", 103000);
	p->Print();
	p--;
	delete[] p;
	return 0;
}
