//
// Created by Thiago on 23/10/2021.
//

#ifndef PROYECTO_INFOII_NODE_H
#define PROYECTO_INFOII_NODE_H


template <typename T>
class Node {
private:
    T data;
    Node<T> *next;
public:
    Node(T data, Node<T> *next);

    T getData();

    void setData(T data);

    Node<T> *getNext();

    void setNext(Node<T> *next);
};
template<typename T>
T Node<T>::getData() {
    return data;
}

template<typename T>
void Node<T>::setData(T data) {
    this->data = data;
}

template<typename T>
Node<T> *Node<T>::getNext() {
    return next;
}

template<typename T>
void Node<T>::setNext(Node<T> *next) {
    this->next = next;
}

template<typename T>
Node<T>::Node(T data, Node<T> *next) {
    this->next = next;
    this->data = data;
}

#endif //PROYECTO_INFOII_NODE_H
