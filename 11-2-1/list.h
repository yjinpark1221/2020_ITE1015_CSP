template <class T>
class Node {
public:
    T data;
    Node<T>* next;
};

#include <iostream>
template <class T>
class List {
private:
    Node<T>* head;
public:
    List() : head(NULL) {};
    List(T* arr, int n_nodes) {
        head = new Node<T>;
        Node<T>* now = head;
        for(int i = 0; i < n_nodes; ++i) {
            now->next = new Node<T>;
            now->next->data = arr[i];
            now = now->next;
        }
        now->next = NULL;
    };
    ~List() {
        Node<T>* n = head;
        while (n != NULL) {
            Node<T>* temp = n;
            n = n->next;
            delete temp;
        }
    };
    void insert_at(int idx, T& data) {
        Node<T>* n = head;
        for (int i = 0; i < idx; ++i) {
            n = n->next;
        }
        Node<T>* insert = new Node<T>;
        insert->data = data;
        insert->next = n->next;
        n->next = insert;
    }
    void remove_at(int idx) {
        Node<T>* n = head;
        for (int i = 0; i < idx; ++i) {
            n = n->next;
        }
        Node<T>* temp = n->next->next;
        delete n->next;
        n->next = temp;
    }
    void pop_back() {
        Node<T>* n = head;
        while (n->next->next != NULL) {
            n = n->next;
        }
        delete n->next;
        n->next = NULL;
    }
    void push_back(const T& val) {
        Node<T> * n = head;
        while (n->next != NULL) {
            n = n->next;
        }
        n->next = new Node<T>;
        n->next->data = val;
        n->next->next = NULL;
    }
    void pop_front() {
        Node<T>* temp = head->next->next;
        delete head->next;
        head->next = temp;
    }
    void push_front(const T& val) {
        Node<T>* temp = head->next;
        head->next = new Node<T>;
        head->next->data = val;
        head->next->next = temp;
    }
    template <class U>
    friend std::ostream& operator<<(std::ostream& out, List<U>& rhs);
    //print out nodes
};
template <class U>
std::ostream& operator<<(std::ostream& out, List<U>& rhs) {
    Node<U>* n = rhs.head->next;
    out << n->data;
    while (n->next != NULL) {
        out << ", " << n->next->data;
        n = n->next;
    }
    return out;
};
