//
// Created by Xiaofeng Feng on 2024/5/29.
#include <iostream>
#include "PunCha.h"

using namespace std;

PunCha::PunCha(int) {
    std::cout<<"PunCha(int) in static_lib2_demo" <<endl;
}

void PunCha::member_from_static_lib2() {
    this->member_from_static_lib1();
    std::cout<<"member_from_static_lib2() in static_lib2_demo" <<endl;
}