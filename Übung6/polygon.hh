#ifndef POLYGON_HH
#define POLYGON_HH
#include "point.hh"
#include <vector>
#include <cmath>
class Polygon{
	private:
	std::vector<Point>_corners;
	Polygon(const std::vector<Point>& corners);
	Polygon(const std::vector<double>& x,
	const std::vector<double>& y);
	public:
	std::size_t corners() const;
	const Point& corner(std::size_t i)const;
	double volume() const;
	const double pi = M_PI;
};
#endif POLYGON_HH
