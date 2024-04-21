#include"SingleLinkedList.cpp"

int main() {
    SingleLinkedList<int> list;
    list.push_back(1);
    list.print();
    list.push_back(2);
    list.print();
    list.pop_back();
    list.print();
    list.pop_back();
    list.print();
    list.push_front(3);
    list.print();
    list.push_front(4);
    list.print();
    list.pop_front();
    list.print();
    list.push_back(4);
    list.push_back(3);
    list.push_back(5);
    list.push_front(3);
    list.print();
    int elem = 5;
    int position = list.find(elem);
    if (position >= 0) {
        std::cout << "The elem " << elem << " is at position " << position << "." << "\n";
    }
    else {
        std::cout << "The elem " << elem << " is not in the list." << "\n";
    }

    return 0;
}