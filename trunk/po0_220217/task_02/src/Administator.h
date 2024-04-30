#pragma once

#include "HumanResources.h"

class Administator : public HumanResources
{
private:
    int exp;

public:
    Administator() = default;
    Administator(std::string_view _name, const int _age, const int _exp);

    void set(const std::string &_name, const int _age, const int _exp);

    inline int getExp() const { return exp; };

    void showVirt() const override;
};