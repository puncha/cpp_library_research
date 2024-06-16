//
// Created by Xiaofeng Feng on 2024/6/8.
//
#pragma once

void puncha_foo();
void puncha_bar();

class PunCha {
public:
    // constructor
    PunCha();
    PunCha(int);

    // member function
    void member_from_static_lib2();

private:
    void member_from_static_lib1();
};