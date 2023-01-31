#include "launcher.h"
#include "utils.h"
#include <chrono>
#include <iostream>
#include "sorting_algos.h"

Utils utils;
sorting_algos sortingAlgos;

void launcher::launchBubbleSort(std::vector<int> numbers)
{
    auto start = std::chrono::high_resolution_clock::now();
    auto res = sortingAlgos.bubbleSort(numbers);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Ausgabe: " << numbers.size() << std::endl;
    for (int i = 0; i < res.size(); i++)
        std::cout << res[i] << std::endl;
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Dauer: " << duration.count() << "ms" << std::endl;
}

void launcher::launchInsertionSort(std::vector<int> numbers)
{
    auto start = std::chrono::high_resolution_clock::now();
    auto res = sortingAlgos.insertionSort(numbers);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    for (int i = 0; i < res.size(); i++)
        std::cout << res[i] << std::endl;
    std::cout << "Dauer: " << duration.count() << "ms" << std::endl;
}

void launcher::launchMergeSort(std::vector<int> numbers)
{
    auto start = std::chrono::high_resolution_clock::now();
    sortingAlgos.mergeSort(numbers);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Dauer: " << duration.count() << "ms" << std::endl;
}

void launcher::launchQuickSort(std::vector<int> numbers)
{
    auto start = std::chrono::high_resolution_clock::now();
    sortingAlgos.quickSort(numbers, 0, numbers.size());
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Dauer: " << duration.count() << "ms" << std::endl;
}

void launcher::launchSelectionSort(std::vector<int> numbers)
{
    auto start = std::chrono::high_resolution_clock::now();
    sortingAlgos.selectionSort(numbers, numbers.size());
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Dauer: " << duration.count() << "ms" << std::endl;
}

void launcher::launchShellSort(std::vector<int> numbers)
{
    auto start = std::chrono::high_resolution_clock::now();
    sortingAlgos.shellSort(numbers, numbers.size());
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Dauer: " << duration.count() << "ms" << std::endl;
}

void launcher::launchInsortSort(std::vector<int> numbers)
{
    auto start = std::chrono::high_resolution_clock::now();
    sortingAlgos.insortSort(numbers);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Dauer: " << duration.count() << "ms" << std::endl;
}

void launcher::launchSlowSort(std::vector<int> numbers)
{
    auto start = std::chrono::high_resolution_clock::now();
    sortingAlgos.slowSort(numbers);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Dauer: " << duration.count() << "ms" << std::endl;
}