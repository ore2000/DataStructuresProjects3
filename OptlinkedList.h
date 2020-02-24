#pragma once
#include "OptnodeObj.h"

#ifndef LINKEDLIST
#define LINKEDLIST

template<class T>
class linkedList
{
public:
    //node<T>* head;
    node<T> headPointers[27];
    long double size = 0;

    void insert(T item)
    {

        switch (item[0])
        {
        case "a":   node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[0] = temp;
            size = size + 1;
            break;
        case "b":node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[1] = temp;
            size = size + 1;
            break;
        case "c": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[2] = temp;
            size = size + 1;
            break;
        case "d": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[3] = temp;
            size = size + 1;
            break;
        case "e":node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[4] = temp;
            size = size + 1;
            break;
        case "f":node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[5] = temp;
            size = size + 1;
            break;
        case "g": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[6] = temp;
            size = size + 1;
            break;
        case "h": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[7] = temp;
            size = size + 1;
            break;
        case "i":node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[8] = temp;
            size = size + 1;
            break;
        case "j": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[9] = temp;
            size = size + 1;
            break;
        case "k": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[10] = temp;
            size = size + 1;
            break;
        case "l": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[11] = temp;
            size = size + 1;
            break;
        case "m": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[12] = temp;
            size = size + 1;
            break;
        case "n": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[13] = temp;
            size = size + 1;
            break;
        case "o": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[14] = temp;
            size = size + 1;
            break;
        case "p": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[15] = temp;
            size = size + 1;
            break;
        case "q": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[16] = temp;
            size = size + 1;
            break;
        case "r": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[17] = temp;
            size = size + 1;
            break;
        case "s": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[18] = temp;
            size = size + 1;
            break;
        case "t": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[19] = temp;
            size = size + 1;
            break;
        case "u": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[20] = temp;
            size = size + 1;
            break;
        case "v": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[21] = temp;
            size = size + 1;
            break;
        case "w": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[22] = temp;
            size = size + 1;
            break;
        case "x": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[23] = temp;
            size = size + 1;
            break;
        case "y": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[24] = temp;
            size = size + 1;
            break;
        case "z": node<T> * temp = new node<T>(item);
            temp->next = headPointers[0];
            headPointers[25] = temp;
            size = size + 1;
            break;
        default:  node<T>* temp = new node<T>(item);
            temp->next = headPointers[26];
            headPointers[26] = temp;
            size = size + 1;

        }

    }

    void remove(T item) {
        switch (item[0])
        {
        case "a":   node<T> * temp = new node<T>(headPointers[0]->data);
            headPointers[0]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "b":   node<T> * temp = new node<T>(headPointers[1]->data);
            headPointers[1]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "c":   node<T> * temp = new node<T>(headPointers[2]->data);
            headPointers[2]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "d":   node<T> * temp = new node<T>(headPointers[3]->data);
            headPointers[3]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "e":   node<T> * temp = new node<T>(headPointers[4]->data);
            headPointers[4]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "f":   node<T> * temp = new node<T>(headPointers[5]->data);
            headPointers[5]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "g":   node<T> * temp = new node<T>(headPointers[6]->data);
            headPointers[6]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "h":   node<T> * temp = new node<T>(headPointers[7]->data);
            headPointers[7]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "i":   node<T> * temp = new node<T>(headPointers[8]->data);
            headPointers[8]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "j":   node<T> * temp = new node<T>(headPointers[9]->data);
            headPointers[9]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "k":   node<T> * temp = new node<T>(headPointers[10]->data);
            headPointers[10]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "l":   node<T> * temp = new node<T>(headPointers[11]->data);
            headPointers[11]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "m":   node<T> * temp = new node<T>(headPointers[12]->data);
            headPointers[12]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "n":   node<T> * temp = new node<T>(headPointers[13]->data);
            headPointers[13]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "o":   node<T> * temp = new node<T>(headPointers[14]->data);
            headPointers[14]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "p":   node<T> * temp = new node<T>(headPointers[15]->data);
            headPointers[15]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "q":   node<T> * temp = new node<T>(headPointers[16]->data);
            headPointers[16]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "r":    node<T> * temp = new node<T>(headPointers[17]->data);
            headPointers[17]->data = temp->next;
            temp = nullptr;
            size--;;
            break;
        case "s":   node<T> * temp = new node<T>(headPointers[18]->data);
            headPointers[18]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "t":   node<T> * temp = new node<T>(headPointers[19]->data);
            headPointers[19]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "u":   node<T> * temp = new node<T>(headPointers[20]->data);
            headPointers[20]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "v":   node<T> * temp = new node<T>(headPointers[21]->data);
            headPointers[21]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "w":   node<T> * temp = new node<T>(headPointers[22]->data);
            headPointers[22]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "x":   node<T> * temp = new node<T>(headPointers[23]->data);
            headPointers[23]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "y":   node<T> * temp = new node<T>(headPointers[24]->data);
            headPointers[24]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        case "z":   node<T> * temp = new node<T>(headPointers[25]->data);
            headPointers[25]->data = temp->next;
            temp = nullptr;
            size--;
            break;
        default:    node<T>* temp = new node<T>(headPointers[26]->data);
            headPointers[26]->data = temp->next;
            temp = nullptr;
            size--;
        }
    }
    bool find(T item)
    {
        node<T>* temp = headPointers[0];
        switch (item[0])
        {
        case 'a': 
            for (temp = headPointers[0]; temp != nullptr; temp = temp->next)
            {
            sting secWord = temp->data;
            if (secword[1] == item[1])
            {
                if (((temp->data).compare(item)) == 0)
                {
                    return true;
                }
                else if (temp->next == nullptr)
                {
                    return false;
                }
            }
            else
            {

            }
            }
                break;
        case 'b':   for (temp = headPointers[1]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'c':   for (temp = headPointers[2]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'd':   for (temp = headPointers[3]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'e':   for (temp = headPointers[4]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'f':   for (temp = headPointers[5]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'g':   for (temp = headPointers[6]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'h':   for (temp = headPointers[7]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'i':   for (temp = headPointers[8]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'j':   for (temp = headPointers[9]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'k':   for (temp = headPointers[10]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'l':   for (temp = headPointers[11]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'm':   for (temp = headPointers[12]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'n':   for (temp = headPointers[13]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'o':   for (temp = headPointers[14]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'p':   for (temp = headPointers[15]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'q':   for (temp = headPointers[16]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'r':   for (temp = headPointers[17]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 's':   for (temp = headPointers[18]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 't':   for (temp = headPointers[19]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'u':   for (temp = headPointers[20]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'v':   for (temp = headPointers[21]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'w':   for (temp = headPointers[22]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'x':   for (temp = headPointers[23]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'y':   for (temp = headPointers[24]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        case 'z':   for (temp = headPointers[25]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
                break;
        default:   for (temp = headPointers[26]; temp != nullptr; temp = temp->next)
        {
            if (((temp->data).compare(item)) == 0)
            {
                return true;
            }
            else if (temp->next == nullptr)
            {
                return false;
            }
        }
               break;
               return false;
        }
    }

 int getSize()
 {
   return size;
 }

};
#endif // !linkedList