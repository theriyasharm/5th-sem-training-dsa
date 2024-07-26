#include <iostream>
using namespace std;
template <typename T>
class DoublyLinkedList {
private:
    struct Node {
        T data;
        Node* prev;
        Node* next;
        Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}
    };
    Node* head;
    Node* tail;
    size_t size;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

    ~DoublyLinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void push_back(const T& value) {
        Node* newNode = new Node(value);
        if (empty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void push_front(const T& value) {
        Node* newNode = new Node(value);
        if (empty()) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    void pop_front() {
        if (empty()) return;
        Node* temp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        else tail = nullptr;
        delete temp;
        size--;
    }

    void pop_back() {
        if (empty()) return;
        Node* temp = tail;
        tail = tail->prev;
        if (tail) tail->next = nullptr;
        else head = nullptr;
        delete temp;
        size--;
    }

    T& front() {
        if (empty()) throw runtime_error("List is empty");
        return head->data;
    }

    T& back() {
        if (empty()) throw runtime_error("List is empty");
        return tail->data;
    }

    bool empty() const {
        return size == 0;
    }

    size_t getSize() const {
        return size;
    }
};

int main() {
    DoublyLinkedList<int> list;

    list.push_back(1);
    list.push_back(2);
    list.push_front(0);

    cout << "Front: " << list.front() << endl;
    cout << "Back: " << list.back() << endl;

    list.pop_front();
    list.pop_back();

    cout << "Size: " << list.getSize() << endl;
    cout << "Front after pop: " << list.front() << endl;

    return 0;
}