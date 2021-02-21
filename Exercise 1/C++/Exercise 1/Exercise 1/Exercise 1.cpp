// Exercise 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "ArmstrongNumbers.h"
#include "FriendlyNumbers.h"

int main()
{
    ArmstrongNumbers armstrong = ArmstrongNumbers();
    armstrong.printNumbers(1, 32000);
    std::cout << "----------------------------------\n";

    FriendlyNumbers friendly = FriendlyNumbers();
    friendly.printNumbers(1, 10000);

}

