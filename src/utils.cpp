#include "utils.h"
#include <iostream>

std::vector<int> Utils::readNumbersFromCSV(const std::string &filename)
{
    std::ifstream file(filename);
    std::vector<int> numbers;
    std::string line;
    while (std::getline(file, line))
    {
        std::stringstream lineStream(line);
        int number;
        while (lineStream >> number)
        {
            numbers.push_back(number);
        }
    }
    return numbers;
}

void Utils::printVector(std::vector<int> numbers)
{
    for (size_t i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << std::endl;
    }
}