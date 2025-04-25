//Practice QuickSort

#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<int>& array, int low, int high){
    if (low >= high){
        return;
    }
    int pivot = array[high];

    int left = low, right = high, temp;

    while (left < right){
        while(array[left] <= pivot && left < right){
            left++;
        }
        while(array[right] > pivot && left < right){
            right--;
        }
        temp = array[left];
        array[left] = array[right]; // right not high
        array[right] = temp;
    }
    array[high] = array[left]; //remember this
    array[left] = pivot;
    quicksort(array,low,left-1);
    quicksort(array,left+1,high);
}