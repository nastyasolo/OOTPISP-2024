#pragma once

#include <iostream>

#include "ProgrammError.h"
#include "CantCastValue.h"
#include "CastError.h"
#include "ImpossibleToInterface.h"
#include "NotEnoughPrivileges.h"

#include <vector>
#include <memory>
#include <stdexcept>

class Container
{
public:
    Container() = default;

    void ShowAll() const;
    void Add(ProgrammError *_err);
    int size() const;

    ProgrammError *operator[](const int index);

    struct Node
    {
        explicit Node(ProgrammError *_date)
            : date(_date)
        {
        }

        ProgrammError *date;
        std::unique_ptr<Node> next = nullptr;
    };

private:
    int32_t _size = 0;
    std::unique_ptr<Node> head = nullptr;
};
