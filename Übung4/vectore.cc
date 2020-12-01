#include <iostream> 
#include <vector> 
#include <utility>

void reversed(std::vector<double>& v)
{
	for(int i = 0;i <= v.size();)
	{
		double x = v[i];
		double y = v[v.size()-i];
		std::swap(x,y);
		v[i] = x;
		v[v.size()-i] = y;
		i = i+1;
	}
}

int main(int argc, char** argv)
{
	std::vector<double> v{{1,3,4,25}};
	reversed(v);
	for(auto elem : v)
	{
		std::cout << elem << std::endl;
	}
	return 0;
} 	
