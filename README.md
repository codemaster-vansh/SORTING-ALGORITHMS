# C++ Sorting Algorithms

This repository contains implementations of several common sorting algorithms in C++. It's intended as a simple, educational resource for understanding how these algorithms work.

## Algorithms Included

*   **Bubble Sort:** A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
*   **Insertion Sort:** A simple sorting algorithm that builds the final sorted array one item at a time.
*   **Selection Sort:** A simple sorting algorithm that divides the input list into two parts: a sorted sublist of items which is built up from left to right at the front (left) of the list and a sublist of the remaining unsorted items that occupy the rest of the list.
*   **Quicksort:** An efficient sorting algorithm that uses a divide-and-conquer strategy to sort elements.

## How to Compile and Run

To compile and run any of the sorting algorithms, you'll need a C++ compiler like g++.

### Bubble Sort

```bash
g++ BubbleSort.cpp utils.cpp -o BubbleSort
./BubbleSort
```

### Insertion Sort

```bash
g++ InsertionSort.cpp utils.cpp -o InsertionSort
./InsertionSort
```

### Selection Sort

```bash
g++ SelectionSort.cpp utils.cpp -o SelectionSort
./SelectionSort
```

### Quicksort

```bash
g++ QuickSort.cpp utils.cpp -o QuickSort
./QuickSort
```

Each program will prompt you to enter the size of the array to be sorted. It will then generate a random array of that size, print the unsorted array, sort it, and finally print the sorted array.