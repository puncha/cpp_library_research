//
// Created by Xiaofeng Feng on 2024/5/29.
#include <iostream>
#include "PunCha.h"

using namespace std;

__attribute__((weak)) void puncha_bar() {
    std::cout<<"foo in static_lib_weak"<<endl;
}