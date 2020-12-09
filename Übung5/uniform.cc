#include "statistics.hh"
#include "io.hh"
int main(int argc, char** argv)
{	
	std::vector<double> v;
	v = uniform_distribution(21,14,5.0,25.0);
	double t;
	double t2;
	double t3;
	t = std::pow(standard_deviation(v),2);
	t2 = moment(v,2);
	t3 = std::pow(mean(v),2);
	double erg;
	erg = t2 - t3;
	std::cout << t << " = " << erg << std::endl; 
	return 0;	

}
	
