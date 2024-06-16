#import "PunCha.h"

int main() {
    puncha_foo();   // defined in static_lib.o & dyn_lib.o
    puncha_bar();   // defined in dyn_lib.o
//    puncha_zoo();
    return 0;
}
