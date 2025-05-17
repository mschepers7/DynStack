#ifndef DYNSTACK_H
#define DYNSTACK_H

#include <iostream>
using namespace std;

template <class T>
class DynStack
{
private:
    struct StackNode
    {
        T value;
        StackNode* next;

        // Constructor
        StackNode(T value1, StackNode* next1 = nullptr)
        {
            value = value1;
            next = next1;
        }
    };

    StackNode* top;

public:
    // Constructor
    DynStack() { top = nullptr; }

    // Destructor
    ~DynStack();

    // Stack operations
    void push(T);
    void pop(T&);
    bool isEmpty() const;

    // Stack Exception
    class Underflow {};
};

// Push method
template <class T>
void DynStack<T>::push(T val)
{
    top = new StackNode(val, top);
}

// Pop method
template <class T>
void DynStack<T>::pop(T& val)
{
    if (isEmpty())
        throw Underflow();
    else
    {
        val = top->value;
        StackNode* temp = top;
        top = top->next;
        delete temp;
    }
}

// isEmpty method
template <class T>
bool DynStack<T>::isEmpty() const
{
    return top == nullptr;
}

// Destructor
template <class T>
DynStack<T>::~DynStack()
{
    StackNode* garbage = top;
    while (garbage != nullptr)
    {
        top = top->next;
        delete garbage;
        garbage = top;
    }
}

#endif
