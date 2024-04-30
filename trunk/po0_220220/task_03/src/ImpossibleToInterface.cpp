#include "ImpossibleToInterface.h"

ImpossibleToInterface::ImpossibleToInterface(const uint8_t num)
    : ProgrammError("ImpossibleToInterface"), interfaceNumber(num)
{
}

void ImpossibleToInterface::Print() const
{
    ProgrammError::Print();
    std::cout << "Impossible to interface with interface number " << interfaceNumber << std::endl;
}

bool ImpossibleToInterface::operator==(const ImpossibleToInterface &right) const
{
    return (this->interfaceNumber == right.interfaceNumber);
}
