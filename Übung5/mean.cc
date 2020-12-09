#include <iostream>
#include <cmath>
#include <vector>
double mean(const std::vector<double>& v)
{
	double l = 0;
	int i = 0;
	double avg = 0;
	double mean;
	mean = 1/v.size();
	while(i<=v.size()-1)
	{
		l = l + v[i];	
		i++;
	}		
	avg = mean * l;
	return avg;
}

int main(int argc, char** argv)
{
	std::vector<double> v = {{2,5,6,7,1,9}};
	std::cout << mean(v) << std::endl;
	return 0;
}
