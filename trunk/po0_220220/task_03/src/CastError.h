#pragma once

#include <string_view>
#include <string>
#include "ProgrammError.h"

class CastError : public ProgrammError
{
public:
    CastError() = default;
    explicit CastError(std::string_view _message);
    CastError(const CastError &oth) = delete;

    ~CastError() override = default;

    void Print() const override;

    inline void SetErrorCode(const int8_t code) { errorCode = code; };

    bool operator==(const CastError &right) const;

private:
    int8_t errorCode = 0;
};
