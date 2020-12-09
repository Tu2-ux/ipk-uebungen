#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

double median(const std::vector<double>& v)
{
	std::vector<double>r = v;
	r = std::sort(r.begin(),r.end());
	double med1;
	double med2;
	if(r.size()%2)
	{
		med1 = (r[r.size()/2]+r[(r.size()/2)+1])/2;
		return med1;
	}
	else
	{
		double k;
		k = std::round(r.size()/2);
		med2 = r[k];
		return med2;
	}
}

int main(int argc, char** argv)
{
	std::vector<double> v = {{4,5,6,1}};
	median(v);
}
	
