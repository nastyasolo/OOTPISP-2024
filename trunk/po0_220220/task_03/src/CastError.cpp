#include "CastError.h"

CastError::CastError(std::string_view _message)
    : ProgrammError(_message)
{
}

void CastError::Print() const
{
    ProgrammError::Print();
    std::cout << "CastError: " << std::to_string(errorCode) << std::endl;
}

bool CastError::operator==(const CastError &right) const
{
    return (this->errorCode == right.errorCode);
}
