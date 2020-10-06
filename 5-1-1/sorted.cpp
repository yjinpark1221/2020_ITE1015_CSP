#include "sorted.h"
#include <algorithm>
SortedArray::SortedArray() {}
SortedArray::~SortedArray() {
    numbers_.clear();
}

void SortedArray::AddNumber(int num) {
    numbers_.push_back(num);
}
std::vector<int> SortedArray::GetSortedAscending() {
    std::vector<int> ret(numbers_.begin(), numbers_.end());
    std::sort(ret.begin(), ret.end());
    return ret;
}
bool desc(int a, int b) {
    return a > b;
}
std::vector<int> SortedArray::GetSortedDescending() {
    std::vector<int> ret(numbers_.begin(), numbers_.end());
    std::sort(ret.begin(), ret.end(), desc);
    return ret;
}
int SortedArray::GetMax() {
    return *(std::max_element(numbers_.begin(), numbers_.end()));
}
int SortedArray::GetMin() {
    return *(std::min_element(numbers_.begin(), numbers_.end()));
}
