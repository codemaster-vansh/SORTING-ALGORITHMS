#include <iostream>
#include <vector>
#include <random>   
#include <algorithm>
using namespace std;

void printArr(vector<int> array){
    cout << "[";
    for (int i = 0;i<array.size();i++){
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

vector<int> ArrayGen(int size, int min, int max){
    int rand;
    vector<int> array;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min,max);
    for (int i  = 0;i<size;i++){
        rand = distrib(gen);
        array.push_back(rand);
    }
    return array;
}

/*void swap(int* a, int* b){
    *a = *b - *a;
    *b = *b - *a;
    *a = *b + *a;
}*/

vector<int> SelectionSort(vector<int> array){
    int size = array.size();
    int i = 0,j,temp,min,min_idx;
    while(i < size - 1){
        min = array[i];
        min_idx = i;
        for(j = i + 1;j<size;j++){
            if (array[j] < min){
                min = array[j];
                min_idx = j;
            }
        }
        temp = array[min_idx] - array[i];
        array[i] += temp;
        array[min_idx] -= temp;
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
    printArr(array);
    return 0;
}