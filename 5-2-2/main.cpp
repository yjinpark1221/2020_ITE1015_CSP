#include "setfunc.h"
#include <iostream>
size_t GetOperator(const std::string& str) {
    auto op_pos = str.find_first_of("+");
    if (op_pos == std::string::npos) op_pos = str.find_first_of("*");
    if (op_pos == std::string::npos) {
    auto temp = str.find_first_of("-");
    while (temp != std::string::npos && str.at(temp + 1) != ' ')
        temp = str.find_first_of("-", temp + 1);
        op_pos = temp;
    }
    return op_pos;
}
int main() {
    std::string s;
    while (std::getline(std::cin, s) && s != "0") {
        size_t op_pos = GetOperator(s);
        if (s[op_pos] == std::string::npos) continue;
        size_t start0 = s.find("{");
        size_t start1 = s.find("{", op_pos);
        size_t end0 = s.find("}");
        size_t end1 = s.find("}", op_pos);
        size_t len0 = end0 - start0 - 1;
        size_t len1 = end1 - start1 - 1;
        std::set<int> set0 = parseSet(s.substr(start0 + 1, len0));
        std::set<int> set1 = parseSet(s.substr(start1 + 1, len1));
        if (s[op_pos] == '+') {
            printSet(getUnion(set0, set1));
        }
        else if (s[op_pos] == '-') {
            printSet(getDifference(set0, set1));
        }
        else if (s[op_pos] == '*') {
            printSet(getIntersection(set0, set1));
        }
    }
    return 0;
} 
