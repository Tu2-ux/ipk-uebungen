#include <cmath>
#include <iostream>

#include "canvas.hh"

int main() {
  Canvas canvas(Point(0, 0), 4.0, 3.0, 4000, 3000);

  for (int j = 0; j < 4000; ++j)
    for (int i = 0; i < 3000; ++i) {
      auto x = canvas.coord(i, j);
      canvas.setBrightness(
          i, j,
          std::max(0.0,
                   100 * (std::sin(1 / x.x()) * std::sin(1 / x.y()) + 1.0)));
    }

  canvas.write("result.pgm");
}
