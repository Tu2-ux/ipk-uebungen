#include "statistics.hh" 

#include <iostream>
#include <random>
#include <string>
#include <cmath>
#include <algorithm>
double mean(const std::vector<double>& v)
{
	double l = 0;
	int i = 0;
	double avg = 0;
	double mean;
	avg = 1/v.size();
	while(i<=v.size()-1)
	{
		l = l + v[i];	
		i++;
	}		
	mean = avg * l;
	return avg;
}

double median(const std::vector<double>& v)
{
	std::vector<double>r = v;
	std::sort(r.begin(),r.end());
	if(r.size()%2)
	{
		double med;
		med = (r[r.size()/2]+r[(r.size()/2)+1])/2;
		return med;
	}
	else
	{
		double med;
		double k;
		k = std::round(r.size()/2);
		med = r[k];
		return med;
	}
}

double moment(const std::vector<double>& v,int k)
{
	double l = 0;
	int i = 0;
	double avg = 0;
	double mean;
	mean = 1/v.size();
	double moment;
	while(i<=v.size()-1)
	{
		l = l + (std::pow(v[i],k));	
		i++;
	}		
	moment = mean * l;
	return moment;
}

double standard_deviation(const std::vector<double>& v)
{	
	double l = 0;
	int i = 0;
	double avg= 0;
	double mean;
	mean = 1/v.size();
	double std_dev;
	double m = 0;
	while(i<=v.size()-1)
	{
		l = l + v[i];	
		i++;
	}		
	avg = mean * l;
	
	while(i<=v.size()-1)
	{
		m = (m + v[i])-avg;	
		i++;
	}		
	std_dev = std::sqrt(l*mean);
	return std_dev;
}
	
int main()
{
}
