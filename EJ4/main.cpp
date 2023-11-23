#include <iostream>
#include <string>

int main() {
    std::string sentence = "El lenguaje C++ es poderoso.";
    std::string sub_str = "C++";
    size_t pos = sentence.find(sub_str);
    if (pos != std::string::npos) {
        std::cout << "Subcadena encontrada en la posición: " << pos << std::endl;
        sentence.replace(pos, sub_str.length(), "Python");
        std::cout << "Cadena resultante: " << sentence << std::endl;
    } else {
        std::cout << "Subcadena no encontrada." << std::endl;
    }

    return 0;
}
