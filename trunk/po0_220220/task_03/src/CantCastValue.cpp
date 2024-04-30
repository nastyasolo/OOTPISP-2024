#include "CantCastValue.h"

CantCastValue::CantCastValue(ErrorLevels level)
    : ProgrammError("Error during casting"), erLevel(level)
{
}

void CantCastValue::Print() const
{
    ProgrammError::Print();
    std::cout << "Error level: " << std::to_string(static_cast<int8_t>(erLevel)) << std::endl;
}

bool CantCastValue::operator==(const CantCastValue &right) const
{
    return (this->erLevel == right.erLevel);
}
