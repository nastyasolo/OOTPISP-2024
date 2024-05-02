#include "ErrorCollection.h"
#include <iostream>


ErrorCollection::ErrorCollection(int count) : m_count(count) {
    m_errors = new BaseError * [count]();
}

ErrorCollection::~ErrorCollection() {
    for (int i = 0; i < m_count; ++i) {
        delete m_errors[i];
    }
    delete[] m_errors;
}
BaseError* ErrorCollection::operator[](int index) const {
    try {
        if (index < 0 || index >= m_count) {
            throw InvalidIndex(index);
        }
        return m_errors[index];
    }
    catch (const InvalidIndex& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return nullptr;
    }
}

BaseError*& ErrorCollection::operator[](int index) {
    try {
        if (index < 0 || index >= m_count) {
            throw InvalidIndex(index);
        }
        return m_errors[index];
    }
    catch (const InvalidIndex& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        static BaseError* nullPtr = nullptr;
        return nullPtr;
    }
}
