#include "sorting_algos.h"
#include <iostream>

std::vector<int> sorting_algos::bubbleSort(std::vector<int> numbers){
    bool swapped;
    for (int i = 0; i < numbers.size() && swapped; i++)
    {
        swapped = false;
        for (int j = 0; j < numbers.size() - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                std::swap(numbers[j], numbers[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            return numbers;
    }
    return numbers;
}

std::vector<int> sorting_algos::insertionSort(std::vector<int> numbers){
    for (int i = 1; i < numbers.size(); i++)
    {
        int key = numbers[i];
        int j = i - 1;
        while (j >= 0 && numbers[j] > key)
        {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j + 1] = key;
    }
    return numbers;
    
}

std::vector<int> sorting_algos::mergeSort(std::vector<int> numbers){
    mergeSort(numbers, 0, numbers.size() - 1);
}

void sorting_algos::mergeSort(std::vector<int> numbers, int left, int right){
    if (left < right)
    {
        int middle = left + (right - left) / 2;
        mergeSort(numbers, left, middle);
        mergeSort(numbers, middle + 1, right);
        merge(numbers, left, middle, right);
    }
}

void sorting_algos::merge(std::vector<int> numbers, int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArray;
    std::vector<int> rightArray;

    for (i = 0; i < n1; i++)
        leftArray[i] = numbers[left + i];
    for (j = 0; j < n2; j++)
        rightArray[j] = numbers[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2){
        if (leftArray[i] <= rightArray[j]){
            numbers[k] = leftArray[i];
            i++;
        } else{
            numbers[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        numbers[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2){
        numbers[k] = rightArray[j];
        j++;
        k++;
    }
}

void sorting_algos::quickSort(std::vector<int> numbers, int left, int right){
    if(left >= right)
        return;
    int pivot = numbers[(left + right) / 2];
    int index = partitionQuicksort(numbers, left, right, pivot);
    quickSort(numbers, left, index - 1);
    quickSort(numbers, index, right);
    
}

int sorting_algos::partitionQuicksort(std::vector<int> numbers, int left, int right, int pivot){
    while (left <= right)
    {
        while (numbers[left] < pivot)
            left++;
        while (numbers[right] > pivot)
            right--;
        if (left <= right)
        {
            std::swap(numbers[left], numbers[right]);
            left++;
            right--;
        }
    }
    return left;
}

std::vector<int> sorting_algos::selectionSort(std::vector<int> numbers, int size){
    int minIndex;
    for(int i = 0; i < size - 1; i++){
        minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(numbers[j] < numbers[minIndex])
                minIndex = j;
        }
        std::swap(numbers[i], numbers[minIndex]);
    }

}

std::vector<int> sorting_algos::shellSort(std::vector<int> numbers, int size){
    int i, j, temp;
    for(int gap = size / 2; gap > 0; gap /= 2){
        for(i = gap; i < size; i++){
            temp = numbers[i];
            for(j = i; j >= gap && numbers[j - gap] > temp; j -= gap)
                numbers[j] = numbers[j - gap];
            numbers[j] = temp;
        }
    }
    return numbers;
}

std::vector<int> sorting_algos::insortSort(std::vector<int> numbers)
{
    int i, j, temp;
    for (i = 1; i < numbers.size(); i++)
    {
        temp = numbers[i];
        for (j = i - 1; j >= 0 && numbers[j] > temp; j--)
            numbers[j + 1] = numbers[j];
        numbers[j + 1] = temp;
    }
    return numbers;
}

std::vector<int> sorting_algos::slowSort(std::vector<int> numbers)
{
    if(numbers.size() <= 1)
        return std::vector<int>();
    for(int i = 0; i < numbers.size() - 1; i++){
        if(numbers[i] > numbers[i + 1])
            std::swap(numbers[i], numbers[i + 1]);
    }
    return numbers;
}
