#ifndef ERROR_COLLECTION_H
#define ERROR_COLLECTION_H

#include "Errors.h"

class ErrorCollection {
    BaseError** m_errors;
    int m_count;
public:
    ErrorCollection(int count);
    ~ErrorCollection();

    BaseError* operator[] (int index) const;
    BaseError*& operator[] (int index);
};

#endif 
