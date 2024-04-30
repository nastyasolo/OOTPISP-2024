#include "Container.h"

void Container::ShowAll() const
{
    const Node *current = head.get();
    while (current != nullptr)
    {
        current->date->Print();
        current = current->next.get();
    }
}

void Container::Add(ProgrammError *err)
{
    auto temp = std::make_unique<Node>(err);
    if (head)
    {
        temp->next = std::move(head);
        head = std::move(temp);
    }
    else
    {
        head = std::move(temp);
    }

    _size++;
}

int Container::size() const
{
    return _size;
}

ProgrammError *Container::operator[](const int index)
{
    try
    {
        if (index < 0 || index >= _size)
            throw std::out_of_range("index out of range");

        auto ptr = std::move(head);
        for (int i = 0; i < index; i++)
        {
            ptr = std::move(ptr->next);
        }
        return ptr->date;
    }
    catch (const std::out_of_range &e)
    {
        std::cout << e.what() << std::endl;
        ProgrammError err;
        return nullptr;
    }
}
