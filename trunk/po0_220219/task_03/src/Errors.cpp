#include <iostream>
#include "Errors.h"

bool InvalidPointer::operator==(const BaseError& other) const {
    const InvalidPointer* otherPtr = dynamic_cast<const InvalidPointer*>(&other);
    if (otherPtr) {
        return m_badAddr == otherPtr->m_badAddr;
    }
    return false;
}

bool InvalidPointer::operator!=(const BaseError& other) const {
    return !(*this == other);
}

InvalidPointer::InvalidPointer(void* badAddr) : m_badAddr(badAddr) {}

void InvalidPointer::Print() const {
    std::cout << "Invalid pointer error occurred!" << std::endl;
}

void ListError::Print() const {
    std::cout << "List error occurred!" << std::endl;
}

bool ListError::operator==(const BaseError& other) const {
    return dynamic_cast<const ListError*>(&other) != nullptr;
}

bool ListError::operator!=(const BaseError& other) const {
    return !(*this == other);
}

bool InvalidIndex::operator==(const BaseError& other) const {
    const InvalidIndex* otherPtr = dynamic_cast<const InvalidIndex*>(&other);
    if (otherPtr) {
        return m_index == otherPtr->m_index;
    }
    return false;
}

InvalidIndex::InvalidIndex(int index) : m_index(index) {}

void InvalidIndex::Print() const {
    std::cout << "Invalid index: " << m_index << "!" << std::endl;
}
const char* InvalidIndex::what() const noexcept {
    return "Invalid index specified.";
}


bool InvalidIndex::operator!=(const BaseError& other) const {
    return !(*this == other);
}

bool ListOverflow::operator==(const BaseError& other) const {
    return dynamic_cast<const ListOverflow*>(&other) != nullptr;
}

bool ListOverflow::operator!=(const BaseError& other) const {
    return !(*this == other);
}

void ListOverflow::Print() const {
    std::cout << "List overflow error occurred!" << std::endl;
}
