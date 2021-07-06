#pragma once
#include "C_WIndow.h"
class C_Small :
    public C_Window
{
public:
    C_Small():C_Window(){}
    C_Small(float width, float height, bool opened) :C_Window(width, height, opened) {}
};

