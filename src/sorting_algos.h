#ifndef sorting_algos_h
#define sorting_algos_h

#include <vector>

class sorting_algos
{

public:
    std::vector<int> bubbleSort(std::vector<int> numbers);
    std::vector<int> insertionSort(std::vector<int> numbers);
    std::vector<int> mergeSort(std::vector<int> numbers);
    void mergeSort(std::vector<int> numbers, int left, int right);
    void merge(std::vector<int> numbers, int left, int mid, int right);
    void quickSort(std::vector<int> numbers, int left, int right);
    int partitionQuicksort(std::vector<int> numbers, int left, int right, int pivot);
    std::vector<int> selectionSort(std::vector<int> numbers, int size);
    std::vector<int> shellSort(std::vector<int> numbers, int size);
    std::vector<int> insortSort(std::vector<int> numbers);
    std::vector<int> slowSort(std::vector<int> numbers);
};

#endif /* sorting_algos_h */
