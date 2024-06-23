//
// Created by Xiaofeng Feng on 2024/6/10.
//
#include <iostream>
#include "PunCha.h"

using namespace std;

__attribute__((weak)) void puncha_foo() {
    std::cout<<"foo in foo_weak"<<endl;
}