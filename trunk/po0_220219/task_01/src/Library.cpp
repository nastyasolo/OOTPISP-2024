#include "Library.h"

//конструктор без параметров
Library::Library() {
	strcpy_s(name, "Неизвестно");
	strcpy_s(author, "Неизвестно");
	cost = 0;
	std::cout << "Вызван конструктор без параметров для объекта " << this << std::endl;
}
//конструктор с параметрами
Library::Library(const char* Name, const char* Author, int Cost)
{
	strcpy_s(name, Name);
	strcpy_s(author, Author);
	cost = Cost;
	std::cout << "\nКонструктор с параметрами вызван для объекта " << this << std::endl;
}
//конструктор копирования
Library::Library(const Library& library)
{
	strcpy_s(name, library.name);
	strcpy_s(author, library.author);
	cost = library.cost;
	std::cout << "Вызван конструктор копирования для объекта " << this << std::endl;
}
//деструктор
Library::~Library()
{
	std::cout << "Вызван деструктор для объекта " << this << std::endl;
}
char* Library::GetName()
{
	return name;
}
char* Library::GetAuthor()
{
	return author;
}
int Library::GetCost()
{
	return cost;
}
void Library::SetName(const char* Name)
{
	strcpy_s(name, Name);
}
void Library::SetAuthor(const char* Author)
{
	strcpy_s(author, Author);
}
void Library::SetCost(int Cost)
{
	cost = Cost;
}
void Library::Set(const char* Name, const char* Author, int Cost)
{
	strcpy_s(name, Name);
	strcpy_s(author, Author);
	cost = Cost;
}
void Library::Print()
{
	std::cout << "Название: \t" << name << std::endl;
	std::cout << "Автор: \t" << author << std::endl;
	std::cout << "Цена: \t" << cost << std::endl;
	std::cout << std::endl;
}
