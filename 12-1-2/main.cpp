#include <iostream>
using namespace std;

int data_size = 5;
class A {
public:
    A() {
        data = new int[data_size];
        for (int i = 0; i < data_size; i++) data[i] = i;
        cout << "constructed"<< endl;
    }
    A(A& a) {
        data = new int[data_size];
        for (int i = 0; i < data_size; ++i) this->data[i] = a.data[i];
    }
    ~A() {
        for (int i = 0; i < data_size; i++)
            data[i] = 0;
        if (data != nullptr) {
            delete[] data;
        }
        data = nullptr;
        cout << "destroyed"<< endl;
    }
private:
    int* data = nullptr;
    friend ostream& operator <<(ostream& os, const A& a);
};

ostream& operator<<(ostream& os, const A& a) {
    for (int i = 0; i < data_size; i++) os << a.data[i] << " ";
    return os;
}

int main() {
    try {
        A a;
        cout << a << endl;
        throw a;
    }
    catch(A& a) {
        cout << "err. handled\n";
        cout << a << endl;
    }
    return 0;
}
