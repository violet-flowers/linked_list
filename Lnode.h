//
// Created by violet on 6/30/22.
//

#ifndef UNTITLED15_LNODE_H
#define UNTITLED15_LNODE_H

template <class T>
class LNode {
public:
    LNode();

    LNode<T> *next();
    LNode<T> *prev();
    void next(LNode<T> *next);
    void prev(LNode<T> *prev);
    T &data();
private:
    T _data;
    LNode<T> *_next;
    LNode<T> *_prev;
};

#include "LNode.cpp"

#endif //UNTITLED15_LNODE_H
