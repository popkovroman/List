#pragma once
#include <iostream>
template<typename T>
class SingleLinkedList {
private:
    struct Node {
        T val;
        Node* next;

        Node(const T& value) : val(value), next(nullptr) {}
    };

    Node* head;
    size_t count;
    void clear();

public:
    SingleLinkedList() : head(nullptr), count(0) {}

    ~SingleLinkedList();

    void push_back(const T& value);
    void push_front(const T& value);

    void pop_back();
    void pop_front();

    int find(const T& value);

    void print();

    size_t size() { return count; }

};