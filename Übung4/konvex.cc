#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <stack>
bool sort_by_angle(std::array<double, 2> a, std::array<double, 2> b) {
    if (a[0] * b[1] - a[1] * b[0] > 0)
        return true;
    else if (a[0] * b[1] - a[1] * b[0] == 0 && std::abs(a[0]) > std::abs(b[0]))
        return true;
    else
        return false;

}
bool sort_by_y(std::array<double, 2> a, std::array<double, 2> b) {
    if (a[1] < b[1]) {
        return true;
    }
    else if (a[1] == b[1] && a[0] < b[0]) {
        return true;
    }
    else {
        return false;
    }

}
int orientation (std::array<double, 2> a,std::array<double, 2> b,std::array<double, 2> c)
{
	int o = (b[0]-a[0])*(c[1]-a[1])-(c[0]-a[0])*(b[1]-a[1]);
	return o;
}
std::stack<std::array<double, 2>>graham_scan(std::vector<std::array<double, 2>>& points) {
	std::stack<std::array<double, 2>> x;
	x.push(points[0]);
	x.push(points[1]);
	int i = 2;
	int n = points.size();
	while(i<n)
	{
		std::array<double, 2> pt1 = x.top();
		x.pop();
		std::array<double, 2> pt2 = x.top();
		x.pop();
		if(orientation(pt1,pt2,points[i]) > 0 || x.isEmpty())
		{
			x.push(pt1);
			x.push(pt2);
			x.push(points[i]);
			i++;
		}
		else
		{
			x.push(pt2);
		}
		
}
		return x;
}
void convex_hull(std::vector<std::array<double, 2>>& points) {
    std::sort(points.begin(), points.end(), sort_by_y);
    std::array<double, 2> w;
    w = points[0];
    for (int i = 1; i < points.size(); ) {

        std::array<double, 2> arr;
        arr = points[i];
        arr[0] = arr[0] - w[0];
        arr[1] = arr[1] - w[1];
        i++;
    }

    std::sort(points.begin() + 1, points.end(), sort_by_angle);
    for (int i = 1; i < points.size(); ) {

        std::array<double, 2> arr1;
        arr1 = points[i];
        arr1[0] = arr1[0] + w[0];
        arr1[1] = arr1[1] + w[1];
        i++;
    }
	
}



int main() {


    return 0;
}

