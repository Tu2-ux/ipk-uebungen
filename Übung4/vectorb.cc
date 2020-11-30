#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>

std::pair<int,int> b(std::vector<int>& a){
	std::sort(a.begin(),a.end());
	std::make_pair(a[0],a[5]);
	return 0;
}

int main(int argc, char** argv)
{
	std::vector<int> a ={{42,4,1,3,49,33}};
	std::pair<int,int> r = b(std::vector<int>& a);
	std::cout << "Kleinster Wert = " << r.first << std::endl;
	std::cout << "Größter Wert = " << r.second << std::endl;
	return 0;
}
