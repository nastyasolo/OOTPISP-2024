# Лабораторная работа №2

## Наследование и виртуальрые функции

## Вариант 3

## Цель работы

Получить практические навыки создания иерархии классов и использования статических компонентов класса.

### Конструктор базового класса

```c++
HumanResources::HumanResources(std::string_view _name, const int _age) : name(_name), age(_age)
{
    if (begin == nullptr)
    {
        begin = this;
    }
    next = nullptr;
    if (last != nullptr)
    {
        last->setNext(this);
    }
    last = this;
}
```

### Статические поля класса

```c++
HumanResources *HumanResources::begin = nullptr;
HumanResources *HumanResources::last = nullptr;
```

#### Метод просмотра списка

```c++
void HumanResources::printAll()
{
    auto ptr = begin;
    while (ptr != nullptr)
    {
        std::cout << ptr->getName() << std::endl;
        std::cout << ptr->getAge() << std::endl;
        std::cout << std::endl;
        ptr = ptr->getNext();
    }
}
```

#### Метод добавления объекта в список

```c++
void HumanResources::add()
{
    if (begin == nullptr)
    {
        begin = this;
    }
    next = nullptr;
    if (last != nullptr)
    {
        last->setNext(this);
    }
    last = this;
}
```
