//
// Created by nizam on 12/12/2021.
//
#include "listtoolshb.h"
#ifndef DJEBILI_HW5_Q1_MYLIST_H
#define DJEBILI_HW5_Q1_MYLIST_H

template <class T>
class MyList {
    public:
        MyList<T>();
        void insertHead (T theData);
        T deleteHead ();
        bool Search (T &target);
        void display();

private:
    Node<T> *head;
};


#endif //DJEBILI_HW5_Q1_MYLIST_H
