#include "ArmstrongNumbers.h"
#include <string>
#include <iostream>
using namespace std;

void ArmstrongNumbers::printNumbers(int start, int end)
{
	for (int i = start; i < end; i++) {
		int len = to_string(i).length();
		int sum = 0;
		int devider = 1;
		while (i/devider>0)
		{
			sum += pow(i / devider % 10, len);
			devider *= 10;
		}
		if (sum == i) {
			cout << i << "\n";
		}
	}
}
