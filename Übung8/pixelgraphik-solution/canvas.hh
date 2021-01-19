#ifndef CANVAS_HH
#define CANVAS_HH

#include <vector>

#include "pgm.hh"
#include "point.hh"
class Canvas {
 public:
  Canvas(const Point& center, double width, double height, std::size_t horPixels, std::size_t vertPixels)
      : _pixels(horPixels, std::vector<int>(vertPixels, 0)),
        _horPixels(horPixels),
        _vertPixels(vertPixels),
        _center(center),
        _width(width),
        _height(height) {}

  // Return the gray value of a pixel
  int brightness(std::size_t i, std::size_t j) const { return _pixels[j][i]; }

  // Set the gray value of a pixel
  void setBrightness(std::size_t i, std::size_t j, int brightness) {
    _pixels[j][i] = brightness;
  }

  // Get the spatial coordinate of the (i,j) pixel
  Point coord(int i, int j) const {
    double x = _center.x();
    double x_interval = _width / _vertPixels;
    i -= _vertPixels / 2;
    x += i * x_interval;

    double y = _center.x();
    double y_interval = _height / _horPixels;
    j -= _horPixels / 2;
    y += j * y_interval;

    return {x, y};
  }

  // Create a pgm file
  void write(const std::string& filename) const {
    write_pgm(_pixels, filename);
  }

 private:
  // Note: the provided pgm helper class expects input where the y coordinate
  // comes first and the x coordinate comes second, so this is the way we store
  // it in _pixels.
  std::vector<std::vector<int>> _pixels;
  const std::size_t _horPixels;
  const std::size_t _vertPixels;
  const Point _center;
  const double _width;
  const double _height;
};

#endif  // CANVAS_HH
