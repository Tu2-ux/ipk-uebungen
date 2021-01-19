#ifndef POLYGON_HH
#define POLYGON_HH

#include <vector>

#include "point.hh"

class Polygon {
 public:
  Polygon(const std::vector<Point>& corners) : _corners(corners) {}

  Polygon(const std::vector<double>& x, const std::vector<double>& y) {
    for (std::size_t i = 0; i < x.size(); ++i)
      _corners.push_back(Point(x[i], y[i]));
  }

  std::size_t corners() const { return _corners.size(); }

  const Point& corner(std::size_t i) const { return _corners[i]; }

  double volume() const {
    auto size = corners();
    double result = 0.0;
    for (std::size_t i = 0; i < size; ++i)
      result += _corners[i].x() * _corners[(i + 1) % size].y() -
                _corners[(i + 1) % size].x() * _corners[i].y();

    return 0.5 * result;
  }

 private:
  std::vector<Point> _corners;
};

#endif  // POLYGON_HH
