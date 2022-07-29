//
// Created by violet on 6/30/22.
//

#include "Lnode.h"



template <class T>
LNode<T>::LNode() {
    _next = nullptr;
    _prev = nullptr;
    _data = 0;
}

template<class T>
LNode<T> *LNode<T>::next() {
    return _next;
}



template <class T>
[[maybe_unused]] void LNode<T>::next(LNode <T> *next) {
    _next = next;
}


template <class T>
T &LNode<T>::data() {
    return _data;
}

template<class T>
LNode<T> *LNode<T>::prev() {
    return _prev;
}

template<class T>
void LNode<T>::prev(LNode<T> *prev) {
    _prev = prev;
}

template<class T>
LNode<T>::~LNode() {
    _data = NULL;
    _next = nullptr;
    _prev = nullptr;
}




