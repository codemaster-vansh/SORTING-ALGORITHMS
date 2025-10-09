#include "utils.h"

void printArr(std::vector<int> array){
    std::cout << "[";
    for (int i = 0;i<array.size();i++){
        std::cout << array[i] << " ";
    }
    std::cout << "]" << std::endl;
}

std::vector<int> ArrayGen(int size, int min, int max){
    int rand;
    std::vector<int> array;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min,max);
    for (int i  = 0;i<size;i++){
        rand = distrib(gen);
        array.push_back(rand);
    }
    return array;
}