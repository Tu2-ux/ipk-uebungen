#ifndef STATISTICS_HH
#define STATISTICS_HH
#include <cmath>
#include <iostream>
template <typename Container, typename T1>
T1 mean(const Container& Container){
	double sum = 0;
	for(auto e: Container)
		sum += e;
		
	return sum /Container.size();
}
template<typename Container,typename T2>
T2 median(const Container& Container, const ) {
  if (Container.size() == 0) return 0;

  auto v2(Container);
  std::sort(v2.begin(), v2.end());

  if (Container.size() % 2 == 0) {
    return 0.5 * (v2[Container.size() / 2 - 1] + v2[Container.size() / 2]);
  } else {
    return v2[(Container.size() + 1) / 2 - 1];
  }
}
template<typename Container, typename T3,typename T4>
T3 moment(const Container& Container, T4) {
  double sum = 0;
  for (auto e : v) sum += std::pow(e, k);

  return sum / &Container.size();
}
template<typename Container>
double std_dev(const Container& Container) {
  double m = mean(Container);
  double sum = 0;
  for (auto e : v) sum += (m - e) * (m - e);

  return std::sqrt(sum / Container.size());
}
#endif 
