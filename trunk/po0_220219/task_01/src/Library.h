#pragma once
#ifndef LibraryH
#define LibraryH
#include <iostream>
#include <cstring>
const int len = 40;
class Library
{
	char name[len];
	char author[len];
	int cost;
public:
	Library(); //конструктор без параметров
	Library(const char*, const char*, int); //конструктор с параметрами
	Library(const Library&); //конструктор копирования
	~Library();     //деструктор
	char* GetName();
	char* GetAuthor();
	int GetCost() const;
	void SetName(const char*);
	void SetAuthor(const char*);
	void SetCost(int);
	void Set(const char*, const char*, int);
	void Print() const;
};
#endif



