#include <cmath>
#include <iostream>

#include "polygon.hh"

// The theoretical volume of a regular polygon with the given number of corners
double theoretical_volume(int corners) {
  return corners * 0.5 * std::sin(2.0 * M_PI / corners);
}

// The i-th corner of a polygon with the given number of corners
Point corner(int corners, int i) {
  auto arg = 2.0 * M_PI * static_cast<double>(i) / corners;
  return {std::cos(arg), std::sin(arg)};
}

int main() {
  for (int n = 1; n < 11; ++n) {
    std::vector<Point> corners;
    for (int i = 0; i < n; ++i) corners.push_back(corner(n, i));

    Polygon polygon(corners);

    std::cout << n << " : theory = " << theoretical_volume(n)
              << " computed = " << polygon.volume() << std::endl;
  }

  // Self intersecting case
  //     _
  //  __|_|
  // |  |
  // |__|
  //
  // Positively oriented parts will have a positive contribution (in this case
  // 2*2=4) and negatively oriented parts will count negative (in this case
  // 1*1=1), which lead to a total volume of 4-1=3
  std::vector<Point> special_corners{{0, 0}, {2, 0}, {2, 3},
                                     {3, 3}, {3, 2}, {0, 2}};
  Polygon polygon(special_corners);
  std::cout << "palpo polygon.volume(): " << polygon.volume() << std::endl;
}
