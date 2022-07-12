//
// Created by violet on 6/30/22.
//

#ifndef UNTITLED15_LLIST_H
#define UNTITLED15_LLIST_H

#include "Lnode.h"

template<class T>
class LList {
public:
    LList();
//    ~LList();
    void append(T data_val);
    void print();
private:
    LNode<T> *head, *tail;
    T _size;
};

#include "LList.cpp"

#endif //UNTITLED15_LLIST_H
