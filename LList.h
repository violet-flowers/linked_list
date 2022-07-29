//
// Created by violet on 6/30/22.
//

#ifndef LINKED_LISTS_LLIST_H
#define LINKED_LISTS_LLIST_H

#include "Lnode.h"

template<class T>
class LList {
public:
    LList();
    ~LList();
    void append(T data_val);
    void print();
    bool isPalindrome();
private:
    LNode<T> *head, *tail;
    T _size;
};

#include "LList.cpp"

#endif //LINKED_LISTS_LLIST_H
