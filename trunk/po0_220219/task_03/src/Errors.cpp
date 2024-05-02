#include <iostream>
#include "Errors.h"

bool InvalidPointer::operator==(const BaseError& other) const {
    if (const auto* otherPtr = dynamic_cast<const InvalidPointer*>(&other)) {
        return m_badAddr == otherPtr->m_badAddr;
    }
    return false;
}




InvalidPointer::InvalidPointer(unsigned char* badAddr) : m_badAddr(badAddr) {}

void InvalidPointer::Print() const {
    std::cout << "Invalid pointer error occurred!" << std::endl;
}

void ListError::Print() const {
    std::cout << "List error occurred!" << std::endl;
}

bool ListError::operator==(const BaseError& other) const {
    return dynamic_cast<const ListError*>(&other) != nullptr;
}


bool InvalidIndex::operator==(const BaseError& other) const {
    if (const auto* otherPtr = dynamic_cast<const InvalidIndex*>(&other)) {
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



bool ListOverflow::operator==(const BaseError& other) const {
    return dynamic_cast<const ListOverflow*>(&other) != nullptr;
}



void ListOverflow::Print() const {
    std::cout << "List overflow error occurred!" << std::endl;
}
