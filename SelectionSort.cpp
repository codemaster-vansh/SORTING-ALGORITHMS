#include <iostream>
#include <vector>
#include <algorithm>
#include "utils.h"

using namespace std;

/*void swap(int* a, int* b){
    *a = *b - *a;
    *b = *b - *a;
    *a = *b + *a;
}*/

vector<int> SelectionSort(vector<int> array){
    int size = array.size();
    int i = 0,j,min_idx;
    while(i < size - 1){
        min_idx = i;
        for(j = i + 1;j<size;j++){
            if (array[j] < array[min_idx]){
                min_idx = j;
            }
        }
        swap(array[i], array[min_idx]);
        i++;
    }
    return array;
}

int main(){
    int size;
    cin>>size;
    vector<int> array = ArrayGen(size,1,100);
    printArr(array);
    vector<int> array1 = SelectionSort(array);
    printArr(array1);
    return 0;
}