#include <vector>
#include <iostream>
#include <cmath>

std::vector<double> reversed(const std::vector<double>& v)
{
	std::vector<double> a(v.size());
	for(int i = v.size()-1;i >= 0;)
	{
		a[v.size()-1-i] = v[i];
		i = i-1;
	}
	return a;
}

int main(int argc, char** argv)
{
	std::vector<double> v{{1,3,4,25}};
	std::vector<double> w = reversed(v);
	for(auto elem : w)
	{
		std::cout << elem << std::endl;
	}
	return 0;
} 	
