
# Лабораторная работа №2 #

## НАСЛЕДОВАНИЕ И ВИРТУАЛЬНЫЕ ФУНКЦИИ ##

## Вариант 5 ##
 

## Цель работы ##
Получить практические навыки создания иерархии классов и использования статических компонентов класса.


### Конструктор с параметрами и без для базового класса  ###
```c++
Organization::Organization() {
	if (head == nullptr) {
		head = this;
	}
	next = nullptr;
	if (lastObject != nullptr) {
		lastObject->setNext(this);
	}
	lastObject = this;
	name = "name";
}
Organization::Organization(string name) {
	if (head == nullptr) {
		head = this;
	}
	next = nullptr;
	if (lastObject != nullptr) {
		lastObject->setNext(this);
	}
	lastObject = this;
	this->name = name;
}
```
### Конструктор с параметрами и без для одного из дочерних классов  ###
```c++
InsuranceCompany::InsuranceCompany() {
	Organization();
	numberOfWorkers = 40;
}
InsuranceCompany::InsuranceCompany(string name, int numberOfWorkers) {
	this->name = name;
	this->numberOfWorkers = numberOfWorkers;
}

```
### Статические компоненты класса ###
```c++
	static Organization* head;
	static Organization* lastObject;
```

### Реализация метода для просмотра списка  ###
```c++
void Organization::printHead() {
	Organization* ptr = head;
	while (ptr != NULL) {
		cout << ptr->getName() << endl;
		ptr = ptr->next;
	}
}

```



