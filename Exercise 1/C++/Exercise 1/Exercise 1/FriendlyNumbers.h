#pragma once
#include <string>
class FriendlyNumbers
{
public:
	void printNumbers(int start, int end);
private:
	int getDevisorsSum(int num);
	struct Pair
	{
		int num;
		int devisorsSum;
		Pair(int n, int ds) {
			num = n;
			devisorsSum = ds;
		}
		
		std::string toString() {
			return std::to_string(num) + " " + std::to_string(devisorsSum);
		}
	};

};

