#include "PunCha.h"
#include <iostream>

int main() {
    puncha_foo();
    if (!puncha_bar) {
        puncha_bar();
    } else {
        std::cout<<"puncha_bar() is not defined!" << std::endl;
    }
    return 0;
}