//
// Created by Xiaofeng Feng on 2024/5/29.
//

#include <iostream>

using namespace std;

void puncha_foo() {
    std::cout<<"foo in dyn_lib2"<<endl;
}

void puncha_zoo() {
    puncha_foo();
    std::cout<<"zoo in dyn_lib2"<<endl;
}
