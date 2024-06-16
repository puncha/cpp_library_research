//
// Created by Xiaofeng Feng on 2024/5/29.
//

#include <iostream>
#include "PunCha.h"

using namespace std;

PunCha::PunCha() {
    std::cout<<"PunCha() in static_lib1_demo" <<endl;
}

void PunCha::member_from_static_lib1() {
    std::cout<<"member_from_static_lib1() in static_lib1_demo" << endl;
}