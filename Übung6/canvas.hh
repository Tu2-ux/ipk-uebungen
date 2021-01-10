#ifndef CANVAS_HH
#define CANVAS_HH 
#include "point.hh"
#include <vector>
class Canvas{
	private:
	const int _horPixels;
	const int _vertPixels;
	const Point _center;
	std::vector<std::vector<int>>_pixel;
	const double _heigth;
	const double _width;
	
	public:
	Canvas(const Point& center, double width, double heigth, 
	int horPixels, int vertPixels);
	int brightness(int i, int j);
	void setBrightness(int i, int j, int brightness);
	Point coord(int i, int j) const;
};
#endif 
