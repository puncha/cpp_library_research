#import "PunCha.h"

int main() {
    puncha_foo();   // defined in dyn_lib1.o & dyn_lib2.o
    puncha_bar();   // defined in dyn_lib1.o
    puncha_zoo();   // defined in dyn_lib2.o
    return 0;
}
