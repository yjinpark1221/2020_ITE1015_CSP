#include <iostream>
using namespace std;
class A {
public:
    A(int n) {
        if (n <= 0) throw "error";
        cout << "ID=" << n << ": constructed"<< endl;
        n_ID = n;
        data = new int[n];
    }
    ~A() {
        cout << "ID=" << n_ID << ": destroyed"<< endl;
        if (data != nullptr) delete data;
    }
private:
    int* data = nullptr;
    int n_ID;
};

int main() {
    try {
        A a(3);
        A b(2);
        {
            A c(1);
            A d(0);
            A e(-1);
        }
    }
    catch(const char* e) {
        std::cout << "caught in the main\n";
    }
    return 0;
}
