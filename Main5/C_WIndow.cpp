#include "C_Window.h"

C_Window::C_Window()
{
	this->width = 10;
	this->opened = 1;
	this->height = 10;
}

C_Window::C_Window(float width, float height, bool opened)
{
	this->width = width;
	this->opened = opened;
	this->height = height;
}

std::ostream& operator<<(std::ostream& out, const C_Window& window)
{
	out << "height is" << window.height << "width is" << window.width<<"is opened"<<window.opened<<" ";
	return out;
}
