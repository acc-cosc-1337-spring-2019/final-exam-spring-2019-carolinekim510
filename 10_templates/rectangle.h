#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rect 
{
public:
	Rect(int h, int w) : height(h), width(w) {}
	double get_area();
private:
	int width;
	int height;
};

#endif // !RECTANGLE_H
