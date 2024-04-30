#pragma once

#include <string_view>
#include <exception>
#include <iostream>

class ProgrammError
{
public:
    ProgrammError() = default;
    explicit ProgrammError(std::string_view _message);
    ProgrammError(const ProgrammError &oth) = delete;

    virtual ~ProgrammError() = default;

    virtual void Print() const;

    ProgrammError &operator=(const ProgrammError &right) = default;
    bool operator==(const ProgrammError &right) const = default;

private:
    std::string_view message = "";
};
