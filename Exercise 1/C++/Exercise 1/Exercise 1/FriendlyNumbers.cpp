#include "FriendlyNumbers.h"
#include <iostream>
#include <list>

void FriendlyNumbers::printNumbers(int start, int end)
{
    std::list<Pair> lst;
    for (int i = start; i < end; i++)
        lst.push_back(Pair(i, getDevisorsSum(i)));
           
    for (Pair p : lst)
        for (Pair p1 : lst)
            if (p.num == p1.devisorsSum && p.devisorsSum == p1.num && p.num <= p1.num)
                std::cout << p.toString() << std::endl;
}

int FriendlyNumbers::getDevisorsSum(int num)
{
    int sum = 0;
    for (int i = 1; i < num / 2 + 1; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum;
}
