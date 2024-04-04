#include "Library.h"
Library::Library() {
	strcpy(name, "Unknown");
	strcpy(author, "Unknown");
	SetCost(cost);
	std::cout << "Called a constructor without parameters for an object" << this << std::endl;
}
Library::Library(const char* Name, const char* Author, int Cost)
{
	strcpy(name, Name);
	strcpy(author, Author);
	SetCost(Cost);
	std::cout << "\nCalled a constructor with parameters for an object " << this << std::endl;
}
Library::Library(const Library& library) 
{
	strcpy(name, library.name);
	strcpy(author, library.author);
	SetCost(library.cost);
	std::cout << "Called a copy constructor for an object" << this << std::endl;
}
Library::~Library()
{
	std::cout << "Called a destructor for an object" << this << std::endl;
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
	std::cout << "Name: \t" << name << std::endl;
	std::cout << "Author: \t" << author << std::endl;
	std::cout << "Cost: \t" << cost << std::endl;
	std::cout << std::endl;
}
