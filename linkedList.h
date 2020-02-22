#pragma once
#include "nodeOBJ.h"

#ifndef LINKEDLIST
#define LINKEDLIST

template<class T>
class linkedList
{
public:
    node<T>* head;
     long double size = 0;
     long double foundComp = 0;
     long double notFoundComp =0;
     int compares = 0;
     bool condition = false;
    void insert(T item) {

        node<T>* temp = new node<T>(item);
        temp->next = head;
        head = temp;
        size = size +1;
    }
    void remove(T item) {
        if (head->data != nullptr)
        {
            node<T>* temp = new node<T>(head->data);
            head->data = temp->next;
            temp = nullptr;
            size--;
        }
    }
        bool find(T item)
    {
        for (node<T>* temp = head; temp != nullptr; temp = temp->next)
        {
	  compares++;
            if (((temp->data).compare(item)) == 0)
            {
		    foundComp = compares;
		    compares = 0;
		    condition = true;
		    return condition;
            }
            else if (temp->next == nullptr)
            {
		    notFoundComp = compares;
		    compares = 0;
		    condition = false;
                return condition;
            }
        }
	return condition;
    }
    int getSize()
    {
        return size;
    }
    void print()
    {
        for (node<T>* temp = head; temp != nullptr; temp = temp->next)
        {
            cout << temp->data;
            if (temp->next != nullptr)
            {
                cout << "->";
            }
            else
            {
                cout << "\n";

            }
        }
    }

};
#endif // !linkedList
