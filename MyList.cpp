//
// Created by nizam on 12/12/2021.
//

#include "MyList.h"

template <class T>
void insertHead (T theData)
{
    Node<T> head = new Node<T> (theData);
}



template<class T>
T  deleteHead(){
    Node<T> *discard;
    discard = head;
    head = head->getLink();
    delete discard;
}



template <class T>
bool search(T &target){
         target = head;

        if (target == NULL)  {
            return NULL;
        }
        else {
            while (target->getData( ) != target && target->getLink( ) != NULL)
                target = target->getLink( );

            if (target->getData( ) == target)
                return target;
            else
                return NULL;
        }
}

template <class T>
void display(){

}