#include <iostream>

namespace power{
	int iterative(int q, int n)
	{
		int result = 1;
		std::cout << result << std::endl;
		while(n >0)
		{		
			result = result * q;
			std::cout << result << std::endl;
			n = n- 1;
		}
			return result;
	}
	
}

int main(int argc, char** argv)
{
	int basis;
	int number;
	std::cout << "Geben Sie eine Basis für die Potenz ein." << std::endl;
	std::cout << "q = " << std::flush;
	std::cin >> basis;
	std::cout << "Geben Sie eine Potenz ein." << std::endl;
	std::cout << "n = " << std::flush;
	std::cin >> number;
	power::iterative(basis,number);
}
