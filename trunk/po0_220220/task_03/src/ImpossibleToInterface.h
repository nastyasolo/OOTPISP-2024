#pragma once

#include "ProgrammError.h"

class ImpossibleToInterface : public ProgrammError
{
public:
    ImpossibleToInterface() = default;
    explicit ImpossibleToInterface(const uint8_t num);
    ImpossibleToInterface(const ImpossibleToInterface &oth) = delete;

    ~ImpossibleToInterface() override = default;

    void Print() const override;

    inline void SetInterfaceNumber(const uint8_t num) { interfaceNumber = num; };

    ImpossibleToInterface &operator=(const ImpossibleToInterface &right) = default;
    bool operator==(const ImpossibleToInterface &right) const;

private:
    uint8_t interfaceNumber = 0;
};
