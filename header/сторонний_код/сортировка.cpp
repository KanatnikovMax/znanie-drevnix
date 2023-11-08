#include <iostream>
#include <vector>
using namespace std;

// статичные массивы

// n - количество элементов массива

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

#include <stack>

void quickSort(int arr[], int low, int high) {
    std::stack<int> stack;
    stack.push(low);
    stack.push(high);

    while (!stack.empty()) {
        high = stack.top();
        stack.pop();
        low = stack.top();
        stack.pop();

        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);

        if (i - 1 > low) {
            stack.push(low);
            stack.push(i - 1);
        }

        if (i + 1 < high) {
            stack.push(i + 1);
            stack.push(high);
        }
    }
}
