#ifndef POINT_HH
#define POINT_HH

class Point {
 public:
  // Empty constructor
  Point();

  // Constructor taking coordinates
  Point(double x, double y);

  // Accessors
  double x() const;

  double y() const;

 private:
  double _x;
  double _y;
};

#endif  // POINT_HH
