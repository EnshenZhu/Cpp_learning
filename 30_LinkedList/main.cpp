#include <iostream>

using namespace std;

class Node {
private:
    int value;
    Node *next;
public:
    Node(int value, Node *next = nullptr) {
        this->value = value;
        this->next = next;
    }

    int getValue() {
        return this->value;
    }

    Node *getNext() {
        return this->next;
    }

    void setNext(Node *next) {
        this->next = next;
    }
};

class LinkedList {
private:
    Node *head;
public:
    LinkedList() {
        this->head = nullptr;
    }

    // destructor
    ~LinkedList() {
        while (this->head != nullptr) {
            pop();
        }
    }

    // insertion operator
    friend std::ostream &operator<<(std::ostream &os, const LinkedList &rhs) { //rhs->right-hand-side
        for (Node *curNode = rhs.head; curNode != nullptr; curNode = curNode->getNext()) {
            os << curNode->getNext();
            if (curNode->getNext() != nullptr) {
                os << " ";
            }
        }
    }

    // Add Links (push)
    void push(int value) {
        this->head = new Node(value, this->head);
    }

    // Remove Links (pop)
    int pop() {
        int value;
        if (head != nullptr) {
            value = this->head->getValue();
            Node *temp = this->head;
            this->head = this->head->getNext();
            delete temp;
        } else {
            throw std::range_error("list is empty!");
        }
        return value;
    }

    // find Length
    // find a value
};

int main() {
    LinkedList list;
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);

    cout << list << endl;

    return 0;
}
