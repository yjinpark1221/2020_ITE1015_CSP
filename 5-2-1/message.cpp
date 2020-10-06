#include "message.h"
MessageBook::MessageBook() {}
MessageBook::~MessageBook() {
    messages_.clear();
}
void MessageBook::AddMessage(int number, const std::string& message) {
    messages_[number] = message;
}
void MessageBook::DeleteMessage(int number) {
    auto it = messages_.find(number);
    if (it != messages_.end()) messages_.erase(it);
}
std::vector<int> MessageBook::GetNumbers() {
    std::vector<int> ret;
    for (auto it = messages_.begin(); it != messages_.end(); ++it) {
        ret.push_back(it->first);
    }
    return ret;
}
const std::string& MessageBook::GetMessage(int number) {
    return messages_[number];
}
