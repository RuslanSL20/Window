#pragma once
#include <ostream>
class C_Window
{
protected:
	float height;
	float width;
	bool opened;
public:
	C_Window();
	C_Window(float width, float height, bool opened);
	friend std::ostream& operator << (std::ostream& out, const C_Window& window);
};

