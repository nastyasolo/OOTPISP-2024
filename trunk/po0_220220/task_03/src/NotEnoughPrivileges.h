#pragma once

#include <iostream>

#include "ProgrammError.h"

class NotEnoughtPrivileges : public ProgrammError
{
public:
    enum class RequirePrivileges : bool
    {
        USER,
        KERNEL,
    };

    NotEnoughtPrivileges() = default;
    explicit NotEnoughtPrivileges(RequirePrivileges priv1, RequirePrivileges priv2);
    NotEnoughtPrivileges(const NotEnoughtPrivileges &oth) = delete;

    ~NotEnoughtPrivileges() override = default;

    inline std::pair<RequirePrivileges, RequirePrivileges> Getprivileges() const { return std::make_pair(writePrivileges, readPrivileges); };

    inline void SetWritePrivileges(RequirePrivileges priv) { writePrivileges = priv; };
    inline void SetReadPrivileges(RequirePrivileges priv) { readPrivileges = priv; };

    void Print() const override;

    NotEnoughtPrivileges &operator=(const NotEnoughtPrivileges &right) = default;
    bool operator==(const NotEnoughtPrivileges &right) const;

private:
    RequirePrivileges writePrivileges = RequirePrivileges::USER;
    RequirePrivileges readPrivileges = RequirePrivileges::USER;
};