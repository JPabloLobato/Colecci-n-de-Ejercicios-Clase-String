#include "mystring.h"

MyString::MyString(const std::string& str) : phrase(str) {}

std::string MyString::getString() const {
    return phrase;
}

std::size_t MyString::getSize() const {
    return phrase.size();
}

bool MyString::isEmpty() const {
    return phrase.empty();
}

MyString MyString::operator+(const MyString& other) const {
    return MyString(phrase + other.getString());
}
