#include <iostream>
#include "mystring.h"

using namespace std;
int main() {
    MyString phrase("Hola, buenos dias");
    cout << phrase.getString() << "\n";
    return 0;
}

