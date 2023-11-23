#include <iostream>
#include "mystring.h"

int main() {
    MyString sentence("OpenAI is a leading AI research lab.");
    std::cout << "Tamaño de la cadena: " << sentence.getSize() << std::endl;
    std::cout << "¿Está la cadena vacía? " << (sentence.isEmpty() ? "Sí" : "No") << std::endl;
    return 0;
}

