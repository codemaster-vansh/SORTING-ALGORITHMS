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