#include"SingleLinkedList.h"

template<typename T>
SingleLinkedList<T>::~SingleLinkedList() {
    clear();
}

template<typename T>
void SingleLinkedList<T>::push_back(const T& value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    ++count;
}
template<typename T>

void SingleLinkedList<T>::push_front(const T& value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    ++count;
}

template<typename T>
void SingleLinkedList<T>::pop_back() {
    if (head == nullptr) {
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
    }
    else {
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }
    --count;
}

template<typename T>
void SingleLinkedList<T>::pop_front() {
    if (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    --count;
}

template<typename T>
int SingleLinkedList<T>::find(const T& value) {
    Node* current = head;
    int position = 0;
    while (current != nullptr) {
        if (current->val == value) {
            return position;
        }
        current = current->next;
        position++;
    }

    return -1;
}

template<typename T>
void SingleLinkedList<T>::clear() {
    Node* current = head;
    Node* next;
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
    count = 0;
}

template<typename T>
void SingleLinkedList<T>::print() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << "\n";
}
