#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <memory>

template <class T>
class Vector {
public:
    Vector(int s, T k);
    explicit Vector(int s);
    Vector(const Vector<T>& a);
    Vector(Vector<T>&& a) noexcept;
    Vector& operator=(const Vector<T>& a);
    Vector& operator=(Vector<T>&& a) noexcept;
    ~Vector() = default;

    T& operator[](int index);
    const T& operator[](int index) const;
    int operator()() const;

    Vector operator*(int k) const;
    friend std::ostream& operator<<(std::ostream& out, const Vector<T>& v) {
        for (int i = 0; i < v.size; ++i) {
            out << v.data[i] << " ";
        }
        return out;
    }
    friend std::istream& operator>>(std::istream& in, Vector<T>& v) {
        for (int i = 0; i < v.size; ++i) {
            in >> v.data[i];
        }
        return in;
    }

private:
    int size;
    std::unique_ptr<T[]> data;
};


template <class T>
Vector<T>::Vector(int s, T k) : size(s), data(std::make_unique<T[]>(s)) {
    for (int i = 0; i < size; ++i) {
        data[i] = k;
    }
}

template <class T>
Vector<T>::Vector(int s) : size(s), data(std::make_unique<T[]>(s)) {}

template <class T>
Vector<T>::Vector(const Vector<T>& a) : size(a.size), data(std::make_unique<T[]>(a.size)) {
    for (int i = 0; i < size; ++i) {
        data[i] = a.data[i];
    }
}

template <class T>
Vector<T>::Vector(Vector<T>&& a) noexcept : size(a.size), data(std::move(a.data)) {
    a.size = 0;
}

template <class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& a) {
    if (this == &a) return *this;
    size = a.size;
    data = std::make_unique<T[]>(a.size);
    for (int i = 0; i < size; ++i) {
        data[i] = a.data[i];
    }
    return *this;
}

template <class T>
Vector<T>& Vector<T>::operator=(Vector<T>&& a) noexcept {
    if (this == &a) return *this;
    size = a.size;
    data = std::move(a.data);
    a.size = 0;
    return *this;
}

template <class T>
T& Vector<T>::operator[](int index) {
    return data[index];
}

template <class T>
const T& Vector<T>::operator[](int index) const {
    return data[index];
}

template <class T>
int Vector<T>::operator()() const {
    return size;
}

template <class T>
Vector<T> Vector<T>::operator*(int k) const {
    Vector<T> result(size);
    for (int i = 0; i < size; ++i) {
        result.data[i] = data[i] * k;
    }
    return result;
}

template <class T>
Vector(int, T) -> Vector<T>;

template <class T>
Vector(int) -> Vector<T>;

#endif 
