#ifndef POINT_HH
#define POINT_HH

class Point{
	private:
	double _x;
	double _y;
	public:
	Point();
	Point(const double x, const double y);
	double x() const;
	double y() const;
};
#endif
