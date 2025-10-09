#include <iostream>
#include <vector>
#include <algorithm>
#include "utils.h"

using namespace std;

vector<int> InsertionSort(vector<int> array){
    int size = array.size();
    int min,temp,min_idx,j;
    for (int i = 1;i<size;i++){
        temp = array[i];
        j = i - 1;
        while(j >= 0 && array[j] > temp){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
    return array;
}

int main(){
    int size;
    cin >> size;
    vector<int> array = ArrayGen(size,1,100);
    printArr(array);
    vector<int> array1 = InsertionSort(array);
    printArr(array1);
    return 0;
}