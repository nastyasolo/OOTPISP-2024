#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    Vector(int s, T k);
    Vector(int s);
    Vector(const Vector<T>& a);
    ~Vector() = default;
    Vector& operator=(const Vector<T>& a);
    T& operator[](int index);
    Vector operator*(const int k); 
    int operator()();
    friend ostream& operator<< <>(ostream& out, const Vector<T>& a);
    friend istream& operator>> <>(istream& in, Vector<T>& a);

private:
    int size;
    T* data;
};

template <class T>
Vector<T>::Vector(int s, T k)
{
    size = s;
    data = new T[size];
    for (int i = 0; i < size; i++)
        data[i] = k;
}

template <class T>
Vector<T>::Vector(int s)
{
    size = s;
    data = new T[size];
}

template <class T>
Vector<T>::Vector(const Vector& a)
{
    size = a.size;
    data = new T[size];
    for (int i = 0; i < size; i++)
        data[i] = a.data[i];
}


template <class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& a)
{
    if (this == &a) return *this;
    size = a.size;
    if (data != nullptr) delete[] data;
    data = new T[size];
    for (int i = 0; i < size; i++)
        data[i] = a.data[i];
    return *this;
}

template <class T>
T& Vector<T>::operator[](int index)
{
    if (index >= 0 && index < size) {
        return data[index];
    }
    else {
        throw out_of_range("Error! Index out of range");
    }
}

template <class T>
Vector<T> Vector<T>::operator*(const int k) 
{
    Vector<T> temp(size);
    for (int i = 0; i < size; ++i)
    {
        temp.data[i] = data[i] * k;
    }
    return temp;
}

template <class T>
int Vector<T>::operator()()
{
    return size;
}

template <class T>
ostream& operator<<(ostream& out, const Vector<T>& a)
{
    for (int i = 0; i < a.size; ++i)
        out << a.data[i] << " ";
    return out;
}

template <class T>
istream& operator>>(istream& in, Vector<T>& a)
{
    for (int i = 0; i < a.size; ++i)
        in >> a.data[i];
    return in;
}
