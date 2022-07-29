//
// Created by violet on 6/30/22.
//

#ifndef LINKED_LISTS_LNODE_H
#define LINKED_LISTS_LNODE_H

template <class T>
class LNode {
public:
    LNode();
    virtual ~LNode();
    LNode<T> *next();
    LNode<T> *prev();

    [[maybe_unused]] void next(LNode<T> *next);
    void prev(LNode<T> *prev);
    T &data();
private:
    T _data;
    LNode<T> *_next;
    LNode<T> *_prev;
};

#include "LNode.cpp"

#endif //LINKED_LISTS_LNODE_H
