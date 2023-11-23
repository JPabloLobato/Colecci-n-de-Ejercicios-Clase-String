#include "string_operations.h"

std::string getSubstring(const std::string& str) {
    return str.substr(13, 9); // "Artificial"
}
std::string insertString(const std::string& original, const std::string& toInsert) {
    return original.insert(0, toInsert); // Insertar al principio de la cadena
}
