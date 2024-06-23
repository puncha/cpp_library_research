#include "PunCha.h"

int main() {
    puncha_foo();   // defined in static_lib1.o & static_lib2.o
    puncha_bar();   // defined in static_lib1.o
    puncha_zoo();   // defined in static_lib2.o
    return 0;
}
