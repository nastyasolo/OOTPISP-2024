#pragma once

#include <iostream>
#include <string>

#include "ProgrammError.h"

class CantCastValue : public ProgrammError
{
public:
    enum class ErrorLevels : int8_t
    {
        INFO,
        MESSAGE,
        DEBUG,
        WARNING,
        ERROR,
        CRITICAL,
        FATAL
    };

    CantCastValue() = default;
    explicit CantCastValue(ErrorLevels level);
    CantCastValue(const CantCastValue &oth) = delete;

    ~CantCastValue() override = default;

    void Print() const override;

    inline void SetLevel(ErrorLevels level) { erLevel = level; };

    bool operator==(const CantCastValue &right) const;

private:
    ErrorLevels erLevel = ErrorLevels::INFO;
};
