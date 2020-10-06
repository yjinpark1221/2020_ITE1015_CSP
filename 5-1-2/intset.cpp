#include "intset.h"
#include <algorithm>
IntegerSet::IntegerSet() {}
IntegerSet::~IntegerSet() {
    numbers_.clear();
}
void IntegerSet::AddNumber(int num) {
    if (find(numbers_.begin(), numbers_.end(), num) == numbers_.end()) {
        numbers_.push_back(num);
        std::sort(numbers_.begin(), numbers_.end());
    }
}
void IntegerSet::DeleteNumber(int num) {
    auto it = std::find(numbers_.begin(), numbers_.end(), num);
    if (it != numbers_.end()) {
        numbers_.erase(it);
    }
}
int IntegerSet::GetItem(int pos) {
    if (0 <= pos && pos < numbers_.size()) return numbers_[pos];
    return -1;
}
std::vector<int> IntegerSet::GetAll() {
    return numbers_;
}
