#include <iostream>
#include <cmath> 
int pot3(int q, int n)
{	
		int result = q*q;
		int k = 2;
		while(n >= k)
		{
			if (n == 0)
			{
				return 1;
			}
			else if(n == 1)
			{
				return q;
			}
			else
			{
				if(n == k)
				{
					return result;
				}
				else if(n < k*k)
				{	
				result = result * q;
				k = k + 1;
				}
				else
				{
					result = result * result;
					k = k + k;
				}
			}
		}
			return result;
}
double root_iterative(double q, int n, int steps)
{
		int result = 1;
		std::cout << result << std::endl;
		double a = 1;
		while(steps >0)
		{	
			a = a + (1/n)*((q/pot3(a,n-1))-a);			
			steps = steps - 1;
		}
			return result;
}

int main(int argc, char** argv)
{
	double basis;
	int number;
	int steps;
	std::cout << "Geben Sie eine Basis ein." << std::endl;
	std::cout << " a = " << std::flush;
	std::cin >> basis;
	std::cout << "Geben Sie die n -te WUrzel ein." << std::endl;
	std::cout << "n = " << std::flush;
	std::cin >> number;
	std::cout << "Geben Sie die Steps ein." << std::endl;
	std::cout << "n = " << std::flush;
	std::cin >> steps;
	double root = root_iterative(basis,number,steps);
	std::cout << root << std::endl;
}
