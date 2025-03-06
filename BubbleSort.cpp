#include <iostream>
#include <vector>
#include <random>
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