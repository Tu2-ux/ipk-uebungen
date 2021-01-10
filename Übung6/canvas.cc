#include "canvas.hh"
#include <vector>
Canvas::Canvas(const Point& center, double width, double heigth,
int horPixels, int vertPixels)
: _center(center), _width(width),_heigth(heigth), _horPixels(horPixels),
	_vertPixels(vertPixels)
{}

int Canvas::brightness(int i, int j){
	return _pixel[j][i];
}
void Canvas::setBrightness(int i, int j, int brightness){
	_pixel[j][i]=brightness;
}

Point Canvas::coord(int i, int j)const{
	double pixel_heigth;
	double pixel_width;
	pixel_heigth = _heigth/_vertPixels;
	pixel_width = _width/_horPixels;
	double pixel_x;
	pixel_x = j*pixel_width;
	double pixel_y;
	pixel_y = i*pixel_heigth;
	Point p {pixel_x,pixel_y};
	return p;
}
int main(){}
