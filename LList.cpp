//
// Created by violet on 6/30/22.
//


#include "Lnode.h"
#include "LList.h"
#include <iostream>

using namespace std;



template <class T>
LList<T>::LList(){
    head = tail = nullptr;
    _size = 0;
}

template <class T>
void LList<T>::append(T data_val) {
    //create a new node and set the data member as well
    auto *newNode = new LNode<T>();
    newNode->data() = data_val;

    if (_size == 0){
        head = tail = newNode;
        _size ++;
    }

    else if (_size == 1){
        head->next(newNode);
        newNode->prev(head);
        tail = newNode;
        _size++;
    }

    else{
        LNode<T> *cur = head;
        while(cur != nullptr){
            if(cur->next() == nullptr){
                cur->next(newNode);
                newNode->prev(cur);
                tail = newNode;
                _size++;
                return;
            }
            cur = cur->next();
        }
    }
}

template <class T>
void LList<T>::print(){
    LNode<T> *cur = head;
    LNode<T> *backwards_cur = tail;

    cout<<"FORWARDS"<<endl;
    while (cur != nullptr) {
        cout << cur->data()<< "->";
        cur = cur -> next();
    }

    cout << "\nBACKWARDS" << endl;

    while(backwards_cur != nullptr){
        cout<< backwards_cur->data() <<"->";
        backwards_cur = backwards_cur -> prev();
    }
}

template<class T>
LList<T>::~LList() {
    LNode<T> *cur = head;
    LNode<T> *next;
    while (cur != nullptr) {
        next = cur->next();
        delete cur;
        cur = next;
        _size--;
    }
}

template<class T>
bool LList<T>::isPalindrome() {
    LNode<T> *cur = head;
    LNode<T> *backwards_cur = tail;
    while (cur != nullptr) {
        if (cur->data() != backwards_cur->data()) {
            return false;
        }
        cur = cur->next();
        backwards_cur = backwards_cur->prev();
    }
    return true;
}

