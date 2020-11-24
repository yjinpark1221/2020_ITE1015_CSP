#include "my_container.h"

int main() {
    int size; 
    
    std::cin >> size;
    MyContainer<int> mc_int(size);
    std::cin >> mc_int;
    std::cout << mc_int << "\n";
    
    std::cin >> size;
    MyContainer<double> mc_double(size);
    std::cin >> mc_double;
    std::cout << mc_double << "\n";

    std::cin >> size;
    MyContainer<std::string> mc_string(size);
    std::cin >> mc_string;
    std::cout << mc_string << "\n";

    return 0;
}
