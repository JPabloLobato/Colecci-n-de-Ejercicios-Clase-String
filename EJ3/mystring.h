#ifndef MYSTRING_H
#define MYSTRING_H
#include <string>

class MyString {
public:
    MyString(const std::string& str = "");
    std::string getString() const;
    std::size_t getSize() const;
    bool isEmpty() const;
    MyString operator+(const MyString& other) const;
private:
    std::string phrase;
};
#endif
