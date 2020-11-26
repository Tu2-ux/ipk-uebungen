#include <iostream>
namespace power{
	int recursive(int q, int n)
	{
		
		if(n == 0)
		{
			return 1;
		}
		else
		{
			return recursive(q,n-1)*q;
		}
		
		
	}
}

int main(int argc, char** argv)
{
	int basis;
	int number;
	std::cout << "Geben Sie eine Basis für die Potenz ein." << std::endl;
	std::cout << " q = " << std::flush;
	std::cin >> basis;
	std::cout << "Geben Sie eine Potenz ein." << std::endl;
	std::cout << "n = " << std::flush;
	std::cin >> number;
	int rs;
	rs = power::recursive(basis,number);
	std::cout << basis <<"^"<< number<< " = " << rs << std::endl;
}
