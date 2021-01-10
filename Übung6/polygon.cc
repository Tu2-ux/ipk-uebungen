#include "polygon.hh"

Polygon::Polygon(const std::vector<Point>& corners)
	:  _corners(corners)
	{}

Polygon::Polygon(const std::vector<double>& x, const std::vector<double> & y)
	{
		for(int i = 0; i=x.size();i++)
		{
			Point p{x[i], y[i]}; 
			_corners.push_back(p);
		}
	}
	
std::size_t Polygon::corners() const {
	return _corners.size();
}

const Point& Polygon::corner(std::size_t i) const{
	return _corners[i];
}
// volume ist ein unbekannter Fehler aufgetreten 
double Polygon::volume() const{
	double vol;
	for(int i = 0;i = Polygon::_corners.size()-1;i++)
	{
		vol = (_corners[i][0]*_corners[i+1][1] -_corners[i+1][0]*_corners[i][1]);
	}
	vol = 0.5*vol;
	return vol;
}
