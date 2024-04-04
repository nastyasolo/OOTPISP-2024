#include "Library.h"

//����������� ��� ����������
Library::Library() {
	strcpy(name, "����������");
	strcpy(author, "����������");
	SetCost(cost);
	std::cout << "������ ����������� ��� ���������� ��� ������� " << this << std::endl;
}
//����������� � �����������
Library::Library(const char* Name, const char* Author, int Cost)
{
	strcpy(name, Name);
	strcpy(author, Author);
	SetCost(Cost);
	std::cout << "\n����������� � ����������� ������ ��� ������� " << this << std::endl;
}
//����������� �����������
Library::Library(const Library& library) 
{
	strcpy(name, library.name);
	strcpy(author, library.author);
	SetCost(library.cost);
	std::cout << "������ ����������� ����������� ��� ������� " << this << std::endl;
}
//����������
Library::~Library()
{
	std::cout << "������ ���������� ��� ������� " << this << std::endl;
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
	std::cout << "��������: \t" << name << std::endl;
	std::cout << "�����: \t" << author << std::endl;
	std::cout << "����: \t" << cost << std::endl;
	std::cout << std::endl;
}
