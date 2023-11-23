#include <iostream>
#include <string>

std::string getSubstring(const std::string& str) {
    return str.substr(13, 9); // "Artificial"
}

std::string insertString(const std::string& original, const std::string& toInsert) {
    return original.insert(0, toInsert); // Insertar al principio de la cadena
}

int main() {
    std::string str = "Inteligencia Artificial";
    std::string sub_str = getSubstring(str);

    std::string new_str = insertString(str, "La ");

    std::cout << "Subcadena: " << sub_str << std::endl;
    std::cout << "Cadena resultante: " << new_str << std::endl;

    return 0;
}
