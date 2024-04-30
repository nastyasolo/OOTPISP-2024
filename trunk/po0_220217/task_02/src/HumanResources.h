#pragma once

#include <string>

class HumanResources
{
private:
    std::string name;
    int age;
    HumanResources *next = nullptr;

public:
    HumanResources() = default;
    explicit HumanResources(std::string_view _name_, const int _age);
    inline std::string getName() const { return name; };
    inline int getAge() const { return age; };
    inline HumanResources *getNext() const { return next; };

    void showNotVirt() const;
    virtual void showVirt() const;

    void add();

    void setName(std::string_view _name);
    void setAge(const int _age);

    virtual ~HumanResources() = default;

    static void printAll();

protected:
    void setNext(HumanResources *nextNode);
    static HumanResources *begin;
    static HumanResources *last;
};