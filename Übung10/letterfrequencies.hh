#ifndef LETTERFREQUENCIES_HH
#define LETTERFREQUENCIES_HH
#include "frequencysource.hh"
template<typename Map>
class LetterFrequencies{
	public:
	std::map<char, int> get_frequencies() {
	std::map<char, int> f;

	while (true) {
		unsigned char c;
		// read in character
		std::cin >> c;
		// abort if input closed
		if (not std::cin) break;

		if (std::isalpha(c)) {
		f[std::toupper(c)] += 1;
		}
	}

	return f;
	}

	void print_frequencies(const std::map<char, int>& frequencies) {
		std::size_t total = 0;

		for (auto entry : frequencies) total += entry.second;

		for (auto entry : frequencies)
		std::cout << entry.first << ": "
              << static_cast<double>(entry.second) / total << std::endl;
	}
	
	template<typename Source>
	void readData(Source& source)
	{
		auto source = streamWordSource(std::cin);
 
 		while (true)
  		{
   		auto data = source.next();
  		if (not data.second)
    	    break;
    	_map[data.first] += 1;
		}
		auto source = streamLetterSource(std::cin);
 
 		while (true)
  		{
   		auto data = source.next();
  		if (not data.second)
    	    break;
    	_map[data.first] += 1;
		}
	}
 
	
	void printStatistics(){
		std::size_t total = 0;

		for (auto entry : _map) total += entry.second;

		for (auto entry : _map)
		std::cout << entry.first << ": "
              << static_cast<double>(entry.second) / total << std::endl;
    }
    
	private:
	Map _map;	
	
};
#endif
