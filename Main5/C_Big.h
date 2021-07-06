#pragma once
#include "C_WIndow.h"
class C_Big :
    public C_Window
{
    C_Big() :C_Window() {}
    C_Big(float width, float height, bool opened) :C_Window(width, height, opened) {}
};

