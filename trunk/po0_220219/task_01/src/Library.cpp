#include "Library.h"

//����������� ��� ����������
Library::Library() {
	strcpy_s(name, "����������");
	strcpy_s(author, "����������");
	cost = 0;
	std::cout << "������ ����������� ��� ���������� ��� ������� " << this << std::endl;
}
//����������� � �����������
Library::Library(const char* Name, const char* Author, int Cost)
{
	strcpy_s(name, Name);
	strcpy_s(author, Author);
	cost = Cost;
	std::cout << "\n����������� � ����������� ������ ��� ������� " << this << std::endl;
}
//����������� �����������
Library::Library(const Library& library)
{
	strcpy_s(name, library.name);
	strcpy_s(author, library.author);
	cost = library.cost;
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
	std::cout << "��������: \t" << name << std::endl;
	std::cout << "�����: \t" << author << std::endl;
	std::cout << "����: \t" << cost << std::endl;
	std::cout << std::endl;
}
