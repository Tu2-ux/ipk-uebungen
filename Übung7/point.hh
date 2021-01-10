#ifndef POINT_HH
#define POINT_HH
#include <array>
#include <cmath>
template <typename Coord, int dim>
class Point{
	private:
	std::array<std::array<typename Coord& Coordinate, dim>> var1;
	public:
	static const int dimension = dim;
	Point::Point() : _x(0.0), _y(0.0) {}
	Point::Point(typename Coord& Coordinate x,typename Coord& Coordinate  y) : {
		for(int i = 0; i<= dim -1; i++)
		{
			_var1.push_back(Coordiante x[i], Coordiante y[i]);
		}
		} 
	Coord& x(int i)
	{
		for(int l = 0; l<= dim-1; l++)
		{
			return;
		}
	}
	double norm() const{
		double ergebis = i + std::pow(std::array[i],2);	
		ergebnis = std::sqrt(ergebnis);
		return ergebnis;
	}
	Coord& operator[](int i){}
	const Coord& operator [](int i){}
	
};
#endif 
