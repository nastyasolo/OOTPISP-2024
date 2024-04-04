
# Лабораторная работа №1 #

## Классы и объекты в С++ ##

## Вариант 5 ##
 

## Цель работы ##
Получить практические навыки реализации классов на С++.


### Блоки с кодом реализации конструкторов и деструктора ###
```c++
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

```

### Фрагмент программы, показывающий использование указателя на объект и указателя на функцию ###

#### Указатель на объект ####

```c++
p->Print();
```

#### В переменной а содержится адрес объекта. Затем вызывается метод Print класса Library. Метод выведет в консоль поля объекта а. ####

#### Указатель на функцию ####

```c++
void (Library:: * fptr)(const char*, const char*, int);
fptr = &Library::Set;
Library lib1;
(lib1.*fptr)("Crime and Punishment", "Fedor Dostoevsky", 20000);
lib1.Print();
```

#### Адрес функции Set записывается в указатель на функцию. Затем элемент lib1 разыменовывает указатель и вызывает функцию Set ####
