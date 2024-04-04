#include "Library.h"

//конструктор без параметров
Library::Library() {
	strcpy(name, "Неизвестно");
	strcpy(author, "Неизвестно");
	SetCost(cost);
	std::cout << "Вызван конструктор без параметров для объекта " << this << std::endl;
}
//конструктор с параметрами
Library::Library(const char* Name, const char* Author, int Cost)
{
	strcpy(name, Name);
	strcpy(author, Author);
	SetCost(Cost);
	std::cout << "\nКонструктор с параметрами вызван для объекта " << this << std::endl;
}
//конструктор копирования
Library::Library(const Library& library) 
{
	strcpy(name, library.name);
	strcpy(author, library.author);
	SetCost(library.cost);
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
int Library::GetCost() const
{
	return cost;
}
void Library::SetName(const char* Name)
{
	strcpy(name, Name);
}
void Library::SetAuthor(const char* Author)
{
	strcpy(author, Author);
}
void Library::SetCost(int Cost)
{
	cost = Cost;
}
void Library::Set(const char* Name, const char* Author, int Cost)
{
	strcpy(name, Name);
	strcpy(author, Author);
	cost = Cost;
}
void Library::Print() const
{
	std::cout << "Название: \t" << name << std::endl;
	std::cout << "Автор: \t" << author << std::endl;
	std::cout << "Цена: \t" << cost << std::endl;
	std::cout << std::endl;
}
