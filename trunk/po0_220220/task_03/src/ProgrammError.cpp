#include "ProgrammError.h"
#include <typeinfo>

ProgrammError::ProgrammError(std::string_view _message) : message(_message) {}

void ProgrammError::Print() const
{
    std::cout << "[" << message << "]" << std::endl;
}
