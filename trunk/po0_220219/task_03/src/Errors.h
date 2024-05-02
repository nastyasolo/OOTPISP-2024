#ifndef ERRORS_H
#define ERRORS_H

class BaseError {
public:
    virtual void Print() const = 0;
    virtual ~BaseError() {}

    virtual bool operator==(const BaseError& other) const = 0;
    virtual bool operator!=(const BaseError& other) const = 0;
};

class InvalidPointer : public BaseError {
    void* m_badAddr;
public:
    InvalidPointer(void* badAddr);
    void Print() const override;

    bool operator==(const BaseError& other) const override;
    bool operator!=(const BaseError& other) const override;
};

class ListError : public BaseError {
public:
    void Print() const override;

    bool operator==(const BaseError& other) const override;
    bool operator!=(const BaseError& other) const override;
};

class InvalidIndex : public BaseError {
    int m_index;
public:
    InvalidIndex(int index);
    void Print() const override;

    const char* what() const noexcept;

    bool operator==(const BaseError& other) const override;
    bool operator!=(const BaseError& other) const override;
};

class ListOverflow : public BaseError {
public:
    void Print() const override;

    bool operator==(const BaseError& other) const override;
    bool operator!=(const BaseError& other) const override;
};

#endif
