#include <iostream>
#include <stack>
#include <vector>

void quicksort(std::vector<int>& array, int low, int high){
    if (low >= high){
        return;
    }
    int pivot = array[high];

    int left = low;
    int right = high;
    int temp;

    while (left < right){
        while(array[left] <= pivot && left < right){
            left++;
        }
        while(array[right] > pivot && left < right){
            right--;
        }
        temp = array[left];
        array[left] = array[right];
        array[right] = temp;
    }
    array[high] = array[left];
    array[left] = pivot;
    quicksort(array, low, left - 1);
    quicksort(array, left + 1, high);
}