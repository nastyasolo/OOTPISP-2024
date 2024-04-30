#pragma once

#include "Employer.h"
#include <string>

class Engineer : public Employer
{
private:
    std::string education;

public:
    Engineer() = default;
    Engineer(std::string_view _name, const int _age, const std::string &_prof, const std::string &_educ);

    inline std::string getEduc() const { return education; };
    void showVirt() const override;
};