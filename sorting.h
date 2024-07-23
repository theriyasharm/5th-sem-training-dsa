#ifndef SORTING_H
#define SORTING_H

#include <vector>

void bubbleSort(std::vector<int>& arr);
void selectionSort(std::vector<int>& arr);
void insertionSort(std::vector<int>& arr);
void mergeSort(std::vector<int>& arr, int l, int r);
void printArray(const std::vector<int>& arr);

#endif // SORTING_H
