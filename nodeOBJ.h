#pragma once
#pragma once
#include<iostream>

using std::cin;
using std::cout;
#ifndef NODE
#define NODE

template<class T>
struct node
{
public:
    T data;
    node<T>* next;
    node() { next = nullptr; }
    node(T item)
    {
        data = item;
        next = nullptr;
    }
    ~node()
    {
        delete next;
    }
};
#endif // !node
