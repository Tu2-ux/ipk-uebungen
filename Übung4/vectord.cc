#include <iostream>
#include <cmath>
#include <vector>
void round(std::vector<double>& v)
{
	for(int i = 0; i<= v.size();)
	{
		double k = v[i];
		int l = std::round(k);
		v[i] = l;
		i--;
	}
}

int main(int argc, char** argv)
{
	std::vector<double> v = {1.23};
	round(v);
	for(auto elem: v)
		std::cout << elem << std::endl;
	return 0;
}
