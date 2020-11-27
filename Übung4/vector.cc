#include <vector> 
#include <iostream>
int main(int argc, char** argv)
{
	std::vector<double> v1;
	std::vector<double> v2(10);
	std::vector<double> v3 {{2,5,1,6,7,3}};
	for(double elem: v1)
	{
		std::cout << elem << std::endl;
	}
	for(double enumerate: v2)
	{
		std::cout << enumerate << std::endl;
	}
	for(double e: v3)
	{
		std::cout << e << std::endl;
	}
}
