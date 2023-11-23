#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>

class MyString {
public:
    MyString(const std::string& str = "") : phrase(str) {}
    std::string getString() const {
        return phrase;
    }

private:
    std::string phrase;
};

#endif
