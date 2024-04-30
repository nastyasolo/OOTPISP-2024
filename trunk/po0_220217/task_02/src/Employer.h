#pragma once

#include <string_view>
#include <string>

#include "HumanResources.h"

class Employer : public HumanResources
{
private:
    std::string prof = "";

public:
    Employer() = default;
    Employer(std::string_view _name, const int _age, const std::string &_prof);
    inline std::string getProf() const { return prof; };
    void showVirt() const override;
};