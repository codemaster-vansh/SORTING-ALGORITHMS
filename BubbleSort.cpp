#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;

vector<int> BubbleSort(vector <int> array){
    int size = array.size();
    for(int i = 0;i<size;i++){
        bool swapped = false;
        for(int j = 0;j<size - i - 1;j++){
            if (array[j] > array[j+1]){
                swap(array[j],array[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }
    return array;
}

int main(){
    int size,num;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> array = ArrayGen(size,1,10000);
    cout << "The array is: ";
    printArr(array);
    vector<int> sorted = BubbleSort(array);
    cout << "Sorted Array is: ";
    printArr(sorted);
    return 0; 
}