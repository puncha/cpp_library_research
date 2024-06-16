#include "PunCha.h"

int main() {
    puncha_foo();    // defined in static_lib1.o & static_lib2.o
    PunCha();        // defined in static_lib1_demo.o
    PunCha(3);       // defined in static_lib2_demo.o
    PunCha().member_from_static_lib2(); // defined in static_lib2_demo.o
    return 0;
}