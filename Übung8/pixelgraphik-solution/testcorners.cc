#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

#include "canvas.hh"

void check_close(double a, double b, std::string msg) {
  if (std::abs(a - b) > 1e-10) {
    std::cerr << "Check failed: " << msg << std::endl;
    // immediately aborts the program with a non-zero exit code
    std::abort();
  }
}

int main() {
  std::size_t rows = 20;
  std::size_t cols = 10;

  Point center;

  double width = 40.0;
  double height = 30.0;

  Canvas canvas(center, width, height, rows, cols);

  auto ll = canvas.coord(0, 0);
  check_close(ll.x(), center.x() - 0.5 * width, "lower left: x");
  check_close(ll.y(), center.y() - 0.5 * height, "lower left: y");

  auto lr = canvas.coord(cols - 1, 0);
  check_close(lr.x(), center.x() + 0.5 * width - width / cols,
              "lower right: x");
  check_close(lr.y(), center.y() - 0.5 * height, "lower right: y");

  auto ul = canvas.coord(0, rows - 1);
  check_close(ul.x(), center.x() - 0.5 * width, "upper left: x");
  check_close(ul.y(), center.y() + 0.5 * height - height / rows,
              "upper left: y");

  auto ur = canvas.coord(cols - 1, rows - 1);
  check_close(ur.x(), center.x() + 0.5 * width - width / cols,
              "upper right: x");
  check_close(ur.y(), center.y() + 0.5 * height - height / rows,
              "upper right: y");
}
