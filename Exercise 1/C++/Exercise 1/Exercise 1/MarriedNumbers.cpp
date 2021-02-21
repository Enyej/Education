#include "MarriedNumbers.h"
#include <iostream>
#include <list>

void MarriedNumbers::printNumbers(int start, int end)
{
    std::list<Pair> lst;
    for (int i = start; i < end; i++)
        lst.push_back(Pair(i, getDevisorsSum(i)));

    for (Pair p : lst)
        for (Pair p1 : lst)
            if (p.num +1 == p1.devisorsSum && p.devisorsSum -1 == p1.num && p.num <= p1.num)
                std::cout << std::to_string(p.num) + " " + std::to_string(p1.num) << std::endl;
}

int MarriedNumbers::getDevisorsSum(int num)
    {
        int sum = 0;
        for (int i = 1; i < num / 2 + 1; i++) {
            if (num % i == 0)
                sum += i;
        }
        return sum;
}
