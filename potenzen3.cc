#include <iostream>

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


int main(int argc,char** argv)
{
	int basis;
	int number;
	std::cout << "Geben Sie eine Basis für die Potenz ein." << std::endl;
	std::cout << " q = " << std::flush;
	std::cin >> basis;
	std::cout << "Geben Sie eine Potenz ein." << std::endl;
	std::cout << "n = " << std::flush;
	std::cin >> number;
	int p;
	p = pot3(basis,number);
	std::cout << p << std::endl;
}
