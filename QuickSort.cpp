#include <iostream>
#include <vector>
#include <algorithm>
#include "utils.h"

using namespace std;

// Function to partition the array on the basis of pivot element
int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quicksort(vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> array = ArrayGen(size,1,10000);
    cout << "The array is: ";
    printArr(array);
    quicksort(array, 0, array.size() - 1);
    cout << "Sorted Array is: ";
    printArr(array);
    return 0;
}