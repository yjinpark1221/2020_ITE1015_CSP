#include "setfunc.h"
#include <sstream>
#include <iostream>

std::set<int>parseSet(const std::string& str) {
    std::stringstream ss;
    std::set<int> ret;
    ss.str(str);
    int n;
    while (ss >> n) {
        ret.insert(n);
    }
    return ret;
}
void printSet(const std::set<int>& set_) {
    std::cout << "{ ";
    for (auto it = set_.begin(); it != set_.end(); ++it) {
        std::cout << (*it) << " ";
    }
    std::cout << "}\n";
}
std::set<int> getIntersection(const std::set<int>& set0, const std::set<int>& set1) {
    std::set<int> ret;
    for (auto it = set0.begin(); it != set0.end(); ++it) {
        if (set1.find(*it) != set1.end()) {
           ret.insert(*it);
        }
    } 
    return ret;
}
std::set<int> getUnion(const std::set<int>& set0, const std::set<int>& set1) {
    std::set<int> ret;
    for (auto it = set0.begin(); it != set0.end(); ++it) {
        ret.insert(*it);
    } 
    for (auto it = set1.begin(); it != set1.end(); ++it) {
        ret.insert(*it);
    }
    return ret; 
}
std::set<int> getDifference(const std::set<int>& set0, const std::set<int>& set1) {
    std::set<int> ret = set0;
    for (auto it = set1.begin(); it != set1.end(); ++it) {
        if (set1.find(*it) != set1.end()) {
            ret.erase(*it);
        }
    }
    return ret;
}
