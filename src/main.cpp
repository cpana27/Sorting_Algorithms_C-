#include "utils.h"
#include <iostream>
#include "launcher.h"

int main()
{
    Utils utils;
    launcher launcher;
    std::vector<int> numbers = utils.readNumbersFromCSV("../ressources/exampleNumbers.csv");
    int expression;
    std::cout << "Choose a sorting algorithm:" << std::endl;
    std::cin >> expression;
    switch (expression){
    case 1:
        std::cout << "BubbleSort" << std::endl;
        launcher.launchBubbleSort(numbers);
        break;
    case 2:
        std::cout << "InsertionSort" << std::endl;
        launcher.launchInsertionSort(numbers);
        break;
    case 3:
        std::cout << "MergeSort" << std::endl;
        launcher.launchMergeSort(numbers);
        break;
    case 4:
        std::cout << "QuickSort" << std::endl;
        launcher.launchQuickSort(numbers);
        break;
    case 5:
        std::cout << "SelectionSort" << std::endl;
        launcher.launchSelectionSort(numbers);
        break;
    case 6:
        std::cout << "ShellSort" << std::endl;
        launcher.launchShellSort(numbers);
        break;
    case 7:
        std::cout << "InsortSort" << std::endl;
        launcher.launchInsortSort(numbers);
        break;
    default:
        break;
    }
    return 0;
}