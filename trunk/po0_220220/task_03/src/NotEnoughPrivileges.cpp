#include "NotEnoughPrivileges.h"

NotEnoughtPrivileges::NotEnoughtPrivileges(RequirePrivileges priv1, RequirePrivileges priv2)
    : ProgrammError("Not Enought Privileges"), writePrivileges(priv1), readPrivileges(priv2)
{
}

void NotEnoughtPrivileges::Print() const
{
    ProgrammError::Print();
    std::cout << "To perform this operation need " << std::endl
              << "Write: " << static_cast<bool>(writePrivileges) << std::endl
              << "Read: " << static_cast<bool>(readPrivileges) << std::endl;
}

bool NotEnoughtPrivileges::operator==(const NotEnoughtPrivileges &right) const
{
    return ((this->writePrivileges == right.writePrivileges) && (this->readPrivileges == right.readPrivileges));
}
