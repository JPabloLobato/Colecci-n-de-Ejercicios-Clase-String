#include <iostream>
#include "mystring.h"

int main () {
    MyString str1("Hola");
    MyString str2("mundo!");
    MyString str3 = str1 + str2;
    std::cout << "Cadena resultante: " << str3.getString() << std::endl;
    return 0;
}