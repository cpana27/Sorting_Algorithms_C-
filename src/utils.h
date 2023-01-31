#ifndef UTILS_H
#define UTILS_H

#include <fstream>
#include <sstream>
#include <vector>

class Utils{
public:
    void printVector(std::vector<int> numbers);
    void printVectorWithIndex(std::vector<int> numbers);
    std::vector<int> readNumbersFromCSV(const std::string &filename);
};
#endif /* UTILS_H */